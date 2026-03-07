#!/bin/bash

echo "Compiling calculator..."
gcc calculator.c -o calculator -lm

echo "Running automated test..."

printf "1\n5\n7\n10\n" | ./calculator

echo "Test finished successfully"
