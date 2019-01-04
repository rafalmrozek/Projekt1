#!bin/bash

read $sciezka
echo -n "Liczba wierszy: " >  ilosc.dat
wc - l $sciezka >> ilosc.dat
