#!/bin/bash
echo "Enter a string"
read str
len=${#str}
is_pal=1
for (( i=0; i<len/2; i++));
do
	if [ "${str:i:1}" != "${str:len-i-1:1}" ]; then
		is_pal=0
		break
	fi
done

if [ $is_pal -eq 1 ];then
	echo "$str is a palindrome"
else
	echo "$str is not a palindrome"
fi
