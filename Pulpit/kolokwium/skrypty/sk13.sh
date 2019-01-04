#!/bin/bash

tab=$1
for (( i=${#tab}-1; i>0; i-- ))
do
echo $[tab[$i]]
done

