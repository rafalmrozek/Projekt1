#!/bin/bash

tab=($*)
for (( i=$#-1; i>=0 ; i-- )); do
echo ${tab[i]}
done
