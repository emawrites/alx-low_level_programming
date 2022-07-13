#!/bin/bash

gcc -c -Wall -Werror -fplc *.c
gcc -shared -o liball.so *.o
