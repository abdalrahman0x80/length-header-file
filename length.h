/*
  create by Abdalrahman0x80
  import this header file
  write(
       #include "length.h"
       
       code in C programming language:
          len("hello");

   )
*/


int len(char x[255]){
   int i = 0;
   while(x[i] != '\0'){
      ++i;
   }
   return i;
}
