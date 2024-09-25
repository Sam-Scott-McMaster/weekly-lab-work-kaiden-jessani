#!/bin/bash

if [[ "$1" > "$2" ]]
then
	echo "$1 is a bigger number."
	exit 0
elif [[ "$1" < "$2" ]]
then
	echo "$2 is a bigger number."
	exit 0
elif [[ "$1" = "$2" ]]
then
	echo "The numbers are equal."
	exit 0
else
	echo "stderr"
	exit 1
fi

