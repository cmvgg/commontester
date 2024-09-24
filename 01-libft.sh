#!/bin/bash

#make: 
      cd .. 
      make re
      echo make
      cd -


directorio_archivos="./"

comandos=( "ps "  "" " " "grep a" "wc -w" "ls -l" "wc -l" "cat" "head" "tail" "sort" "uniq" "grep s" "tr -d s" "" "tee" "split" "nl" "fold" "expand" "unexpand" "wc" "sort -u" "uniq -c" "grep -E w" "sed" "awk '{print $1}'" "dd" "cpio -p in" )
random_index=$((RANDOM % ${#comandos[@]}))
comando_seleccionado=${comandos[$random_index]}
cc main_libft.c ../libft.a -o test
for i in $(seq 1 10); do
{
      ./test "$comando_seleccionado" "isalpha"
      diff test.txt test2.txt
      echo "diff isalpha test: $comando_seleccionado"
      ./test "$comando_seleccionado" "isdigit"
      diff test.txt test2.txt
      echo "diff isdigit test: $comando_seleccionado"
} done