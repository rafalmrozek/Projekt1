#!/bin/bash
read x

if [[ x -gt 0 ]] 
then 
echo "x jest dodatnie"
elif [[ 0 -gt x ]]
then 
echo "x jest ujemne"
else
echo "x jest rowne 0"
fi
