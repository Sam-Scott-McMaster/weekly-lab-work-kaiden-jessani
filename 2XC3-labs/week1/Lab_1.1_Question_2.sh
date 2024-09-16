#!/bin/bash
echo "Please enter a directory to remove all the .tmp files from"
read directory
cd $directory
ls $directory
rm *.tmp
echo "All .tmp files have been removed :)"
