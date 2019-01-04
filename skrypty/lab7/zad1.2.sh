#!/bin/bash

    numbers=($*)
function suma1
{   
local  suma=0
    for (( i = 0; i < ${#numbers[*]}; i = i+1 ));
    do
  	suma=$[suma + ${numbers[i]}]
    done
	echo $suma 
}
suma1
exit 0
