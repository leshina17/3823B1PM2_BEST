#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
   for (int i=0; i<strlen(str); i++){
    if (str[i]==sym)
        str[i]="\0";
   }
}

