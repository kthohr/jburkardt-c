#!/bin/bash
#
gcc -c ziggurat_inline_prb.c
if [ $? -ne 0 ]; then
  echo "Errors compiling ziggurat_inline_prb.c."
  exit
fi
#
gcc ziggurat_inline_prb.o /$HOME/libc/$ARCH/ziggurat_inline.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading ziggurat_inline_prb.o."
  exit
fi
#
rm ziggurat_inline_prb.o
#
mv a.out ziggurat_inline_prb
./ziggurat_inline_prb > ziggurat_inline_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running ziggurat_inline_prb."
  exit
fi
rm ziggurat_inline_prb
#
echo "Program output written to ziggurat_inline_prb_output.txt"
