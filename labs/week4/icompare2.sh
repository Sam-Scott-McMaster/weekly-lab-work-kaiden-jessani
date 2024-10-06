#!/bin/bash

if [[  $1 =~ ^[0-9]{1,9}$ && $2 =~ ^[0-9]{1,9} ]]; then
	if [[ $1 -gt $2 ]]; then
		echo "$1 is a bigger number."
		exit 0
	elif [[ $1 -lt $2 ]];then
		echo "$2 is a bigger number."
		exit 0
	elif [[ $1 = $2 ]];then
		echo "The numbers are equal."
		exit 0
	else
		echo "stderr"
		exit 1		
	fi
fi
