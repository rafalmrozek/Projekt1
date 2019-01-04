#!/bin/bash

read x
if [[ $x -gt 0 ]]
then 
	echo "Liczba jest dodatnia "
elif [[ $x  -lt 0 ]]
then
	echo "Liczba jest ujemna"
else [[ $x -eq 0 ]]
	echo "Liczba jest rowna 0"
fi




exit 0;
