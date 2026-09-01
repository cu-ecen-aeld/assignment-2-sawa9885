#!/bin/bash

if [ "$#" -lt 2 ]; then
    echo "Error: filesdir and searchstr must be specified" >&2
    exit 1
fi

filesdir="$1"
searchstr="$2"

if [ ! -d "$filesdir" ]; then
    echo "Error: $filesdir is not a directory" >&2
    exit 1
fi

numfiles=$(find "$filesdir" -type f | wc -l)
matchinglines=$(grep -RhsF -- "$searchstr" "$filesdir" 2>/dev/null | wc -l)

echo "The number of files are $numfiles and the number of matching lines are $matchinglines"
