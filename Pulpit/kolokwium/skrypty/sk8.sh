#!/bin/bash

tab=($*)
function max
{
local let  max=${tab[0]}
for (( i=0; i < ${#tab[*]} ; i++ )) ; do
	if [[ ${tab[$i]} -gt $max ]];
	then max=${tab[$i]} 
    fi
done
echo ${tab[@]}

return $max
}
max

