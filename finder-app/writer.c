#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <syslog.h>

int main(int argc, char *argv[])
{
    FILE *file;
    const char *file_path;
    const char *write_string;

    openlog("writer", LOG_PID, LOG_USER);

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <file> <string>\n", argv[0]);
        syslog(LOG_ERR, "Invalid number of arguments");
        closelog();
        return 1;
    }

    file_path = argv[1];
    write_string = argv[2];

    file = fopen(file_path, "w");
    if (file == NULL) {
        fprintf(stderr, "Unable to open %s: %s\n",
                file_path, strerror(errno));
        syslog(LOG_ERR, "Unable to open %s: %s",
               file_path, strerror(errno));
        closelog();
        return 1;
    }

    syslog(LOG_DEBUG, "Writing %s to %s", write_string, file_path);

    if (fputs(write_string, file) == EOF) {
        fprintf(stderr, "Unable to write to %s: %s\n",
                file_path, strerror(errno));
        syslog(LOG_ERR, "Unable to write to %s: %s",
               file_path, strerror(errno));
        fclose(file);
        closelog();
        return 1;
    }

    if (fclose(file) == EOF) {
        fprintf(stderr, "Unable to close %s: %s\n",
                file_path, strerror(errno));
        syslog(LOG_ERR, "Unable to close %s: %s",
               file_path, strerror(errno));
        closelog();
        return 1;
    }

    closelog();
    return 0;
}
