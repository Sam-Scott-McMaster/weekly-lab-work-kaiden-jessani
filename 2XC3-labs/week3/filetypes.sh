#!/bin/bash

if [[ $# = 0 ]]
then
        exit 1
        echo "stderr" >&2
fi


for arg in "$@"
do
	if [[ -d $arg ]]
	then
        	echo "directory: $arg"

	elif [[ -f $arg ]]
	then
        	echo "file: $arg"
	else
		echo "unknown: $arg"
	fi
done

