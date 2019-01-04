#!/bin/bash
tab=($*)
suma=0
for((i=$#-1; i>=0 ; i--)) do
suma=$[suma + tab[$i]]
done
srednia=$[suma/$#]
echo $srednia
exit 0

