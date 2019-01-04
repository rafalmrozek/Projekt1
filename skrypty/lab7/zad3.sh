#!/bin/bash
tablica=($*)

function max
{
local maximum = ${tablica[0]}

for ((  i = 0; i < ${#tablica[*]} ; i=i+1)); do
	if [[ ${tablica[i]} -ge $maximum ]]
	then
	maximum = ${tablica[i]
	fi
done 
echo $maximum
} 

max

exit 0;
