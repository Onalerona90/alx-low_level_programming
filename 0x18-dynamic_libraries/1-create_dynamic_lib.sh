#!/bin/bash

# reates a dynamic library called liball.so from all the .c files that are in the current directory.
gcc -shared -fPIC -o liball.so ./*.c
