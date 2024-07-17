#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a from all the .o files
ar rcs liball.a *.o

# Clean up the .o files if you don't need them anymore
rm *.o




