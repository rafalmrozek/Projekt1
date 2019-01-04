#!/bin/bash

read sciezka
echo "Ilosc lini w pliku: " > ilosc.dat
wc -l $sciezka >> ilosc.dat  
