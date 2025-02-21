#!/bin/bash
echo "Enter a number"
read n
k=$n
c=0
while [ $k != 0 ];
do
	c=$((c+1))
	k=$((k/10))
done

res=0
k=$n
while [ $k -ne 0 ];
do
	rem=$((k%10))
	res=$((res+rem**c))
	k=$((k/10))
done
if [ $res -eq $n ];then
	echo "$n is an armstrong number"
else
	echo "$n is not an armstrong number"
fi

