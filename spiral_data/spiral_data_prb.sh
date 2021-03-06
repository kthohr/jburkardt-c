#!/bin/bash
#
gcc -c -I/$HOME/include spiral_data_prb.c
if [ $? -ne 0 ]; then
  echo "Errors compiling spiral_data_prb.c"
  exit
fi
#
gcc -o spiral_data_prb spiral_data_prb.o /$HOME/libc/$ARCH/spiral_data.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading spiral_data_prb.o."
  exit
fi
#
rm spiral_data_prb.o
#
./spiral_data_prb > spiral_data_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running spiral_data_prb."
  exit
fi
rm spiral_data_prb
#
echo "Program output written to spiral_data_prb_output.txt"
