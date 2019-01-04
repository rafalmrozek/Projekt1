#!/bin/bash
select y in "dodawanie" "odejmowanie" "mnozenie" "dzielenie" "wyjscie"
do
	case $y in
	"dodawanie") echo $(($1+$2));;
	"odejmowanie") echo $(($1-$2));;
	"mnozenie") echo $(($1*$2));;
	"dzielenie") echo $(($1/$2));;
	"wyjscie") exit 0;;
	 esac
done
