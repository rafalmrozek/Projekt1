#!/bin/bash
if [[ $1 == *.txt ]]
then
nano $1
fi
if [[ $1 == *.sh ]]
then
./$1
fi
