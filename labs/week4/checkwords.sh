#!/bin/bash

echo  "There are $(cat $1 | wc -l) in $1"
echo "There are $(cat $1 | grep -P -i {$2-$3}) | wc -l) in $1"
