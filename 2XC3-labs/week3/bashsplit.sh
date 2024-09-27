#!/bin/bash

if [ $# -gt 0 ]; then
  echo "Usage: bashsplit" >&2
  exit 1
fi

while read -r line; do
  for word in $line; do
    echo "$word"
  done
done
