#!/bin/bash

tablica=($*)
function odwrotnosc
{

for(( i=${#tablica[*]} ; i>=0 ; i=i-1)); do
echo ${tablica[$i]}

done




}
odwrotnosc
exit 0
