echo "Enter the limit"
read num1
a=0
b=1
echo "fibinocci series upto $num1 is"
for (( i=0; i<=num1; i++))
do 
	echo -n "$a"
	fib=$((a + b))
	a=$b
	b=$fib	
done
echo

