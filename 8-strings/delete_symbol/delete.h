#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
   int ii=0;
   for (int i=0; i<strlen(str); i++){
      if (str[i]!=sym){
         str[ii]=str[i];
         ii++;
      }
   }
   str[ii]='\0';
}

