#!/bin/bash
#
gcc -c -g -I/$HOME/include hypercube_monte_carlo_prb.c >& compiler.txt
if [ $? -ne 0 ]; then
  echo "Errors compiling hypercube_monte_carlo_prb.c"
  exit
fi
rm compiler.txt
#
gcc hypercube_monte_carlo_prb.o /$HOME/libc/$ARCH/hypercube_monte_carlo.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading hypercube_monte_carlo_prb.o."
  exit
fi
#
rm hypercube_monte_carlo_prb.o
#
mv a.out hypercube_monte_carlo_prb
./hypercube_monte_carlo_prb > hypercube_monte_carlo_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running hypercube_monte_carlo_prb."
  exit
fi
rm hypercube_monte_carlo_prb
#
echo "Program output written to hypercube_monte_carlo_prb_output.txt"
