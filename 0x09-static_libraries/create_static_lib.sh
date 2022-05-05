#!/bin/bash
gcc -c -Wall -Werror _Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
