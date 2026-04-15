#!/bin/bash

echo "Choose an option:"
echo "1. Check Leap Year"
echo "2. Check Even or Odd"
echo "3. Find Largest of Three Numbers"

read choice

case $choice in

1)
    echo "Enter a year:"
    read year

    if (( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ))
    then
        echo "Leap Year"
    else
        echo "Not a Leap Year"
    fi
    ;;

2)
    echo "Enter a number:"
    read num

    if (( num % 2 == 0 ))
    then
        echo "Even Number"
    else
        echo "Odd Number"
    fi
    ;;

3)
    echo "Enter three numbers:"
    read a b c

    if (( a >= b && a >= c ))
    then
        largest=$a
    elif (( b >= a && b >= c ))
    then
        largest=$b
    else
        largest=$c
    fi

    echo "Largest number is: $largest"
    ;;

*)
    echo "Invalid choice"
    ;;

esac
