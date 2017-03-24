#!/bin/bash
libDIR=$(echo $PWD"/lib")
objDIR=$(echo $PWD"/obj")
if [ -d "$libDIR" ]
then
  rm -R $libDIR
  mkdir $libDIR 
else
  mkdir $libDIR
fi
if [ -d "$objDIR" ]
then
  rm -R $objDIR
  mkdir $objDIR 
else
  mkdir $objDIR
fi
make clean
make
echo "Your library director is" $PWD"/lib" 