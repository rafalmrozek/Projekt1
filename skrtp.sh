#!/bin/bash

read $sciezka
echo  "Liczba wierszy: " >  ilosc.dat
wc -l $sciezka >> ilosc.dat
exit 0
