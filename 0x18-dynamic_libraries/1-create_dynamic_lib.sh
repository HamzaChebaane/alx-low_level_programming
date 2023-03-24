#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -Werror -c -fPCI *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
