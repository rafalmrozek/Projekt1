#!/bin/bash
#1
#echo "Hello World"
#2
#read x
#echo "Witaj $x"
#3
#read x
#read y
#echo $[$x * $y]
#4
#echo $[$1 + $2 + $3]
#5
#read rok 
#cal $rok
#6
#whoami > dane.txt
#pwd >> dane.txt
#7
#read sciezka
#sort $sciezka
#8
#read sciezka
#tar -czvf archiwum.tar.gz $sciezka
#9
#read x
#read sciezka
#cd  ~/
#grep -i  ^$x $sciezka > plik.txt
#10
#mkdir "`date +%x`" 
#zminenna = $(dane +%x)
#let liczba = 1
#liczba=$[1]
#cp text.txt  > cd  "`date +%x`"
#11
tab=($*)
suma=0
for((i=$#-1; i>=0 ; i--)) do
suma=$[suma + tab[$i]]
done
srednia=$[suma/$#]
echo $srednia


exit 0
