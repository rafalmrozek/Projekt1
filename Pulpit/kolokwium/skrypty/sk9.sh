#!/bin/bash

read slowo
function pierwsza
{
echo ${slowo:0:1}

}
function druga 
{

echo ${slowo:${#slowo}-1:1}
}

pierwsza
druga
