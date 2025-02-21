echo "Enter first number: "
read n1
echo "Enter second number: "
read n2
if [ "$n1" -gt "$n2" ];then
	echo "the largest number is: $n1"
elif [ "$n1" -lt "$n2" ]; then
	echo "the largest number is $n2"
else
	echo "Both numbers are equal."
fi
