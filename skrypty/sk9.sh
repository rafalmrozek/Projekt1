#!/bin/bash

read sciezka 

if [[ grep "$sciezka" *.txt  ]]
then 
	echo "txt"
elif [[ grep "$sciezka"  *.sh  ]]
then 
	echo ".sh"
else
	echo "nwm"
fi

	
	



exit 0
