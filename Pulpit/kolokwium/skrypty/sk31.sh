#!/bin/bash


tab=($*)
function d
{
suma=0
for (( i=0 ; i<$# ; i++ ))
do
a=$[tab[$i]/2]
if [[ $[a*2] -eq tab[$i] ]]
	then
		if [[ tab[$i] > 0 ]]
			then
				suma = $[suma + tab[$i]]
			else
				echo "nic"
			fi
	else
	echo "nic"
	fi

return  $suma

}
d
