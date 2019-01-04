#!/bin/bash
read sciezka

if [[ -f $sciezka  ]]
then 
	echo "Sciezka jest plikiem"
elif [[ -d $sciezka  ]]
then
	echo "Sciezka jest katalogiem"
else 
	echo "Sciezka nie istnieje"
fi
exit 0
