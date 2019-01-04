#!/bin/bash
s=1
suma=0
until [ $s -eq 0 ]
do 
	read s
suma=`expr $suma + $s`
done
echo $suma
exit 0
