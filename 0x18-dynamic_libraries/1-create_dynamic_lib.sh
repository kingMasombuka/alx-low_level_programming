#!/bin/bash
gcc -wall -wextra -werror -pendantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_lIBRARY_PATH=.:$LD_lIBRARY_PATH
