#!/bin/bash
echo "Enter the first number"
read num1
echo "Enter second number"
read num2
if [ $num1 -gt $num2 ]; then
	echo "$num1 is the greatest of two"
else
	echo "$num2 is the greatest of two"
fi
