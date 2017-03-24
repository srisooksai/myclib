#!/bin/sh

CFLAG=$HOME/opt/mycpplib/include
LFLAG=$HOME/opt/mycpplib/lib

gcc -Wall -L$LFLAG -I$CFLAG csvread.c -lmydev -o csvread
