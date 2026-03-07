#!/bin/bash

gcc calculator.c -o calculator -lm

echo "Testing addition..."
echo -e "1\n5\n3\n7\n" | ./calculator

echo "Testing square root..."
echo -e "6\n16\n7\n" | ./calculator

echo "Tests completed."
