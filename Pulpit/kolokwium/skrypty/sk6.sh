#!/bin/bash

tab=($*)

s = $#-1

for (( i=$#-1; $i >= 0; i-- )) ;
 do

echo ${tab[$i]}

done
