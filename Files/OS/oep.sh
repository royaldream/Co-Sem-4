# Worst Fit
maximum()
{
	block=("${!1}")
	memory="$2"
	max="$memory"
	j=0
	for number in ${block[@]}
	do
		if [ $max -le $number ]
		then
			max="$number"
			count="$j"
		fi
		j=`expr $j + 1`
	done
	if [ ${block[$count]} -ge $memory ]
	then
		echo "$memory K is put in ${block[$count]} K partition"
		block[$count]=`expr ${block[$count]} - $memory`
	else
		echo "$memory K Must Waited !!!!!"
	fi
} 
n=0
echo "Memory Requested"
for number in $@
do
        echo $number
        memory[$n]=$number
        n=`expr $n + 1`
done
#echo $n

printf "Enter Number Of Free Blocked : "
read fn

i=0
while [ $i -lt $fn ];
do
	read block[$i]
	#echo ${block[$i]}
	i=`expr $i + 1`
done
printf "Worst - Fit\n"
i=0
while [ $i -lt $n ];
do
	maximum block[@] ${memory[$i]}
	i=`expr $i + 1`
done
