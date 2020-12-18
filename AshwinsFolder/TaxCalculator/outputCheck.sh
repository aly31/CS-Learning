#!/bin/bash
g++ -o taxCalculator main.cpp
cat input.txt | ./taxCalculator > output.txt
if diff output.txt expectedOutput.txt > /dev/null
then
	echo "PASS"
else
	echo "FAIL"
	echo ""
	echo "Your output"
	cat output.txt
	echo "--------------------------------"
	echo "--------------------------------"
	echo "Expected output"
	cat expectedOutput.txt

	echo "--------------------------------"
	echo "--------------------------------"
	echo "Here is the differences"
	diff output.txt expectedOutput.txt
fi
