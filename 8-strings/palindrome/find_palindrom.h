#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> //посмотреть пробелы

int is_palindrom(char text[]){
    int c=0;
    if (strlen(text)==0)
        return 1;
    int j=0;

    char* lext = malloc(strlen(text));

    for (int i=0; i<strlen(text); i++){
      if ((lext[i]!=32) && (lext[i]==39)){
         lext[j]=lext[i];
         j++;
      }
    }
    lext[j]='\0';
    for (int i=0; i<((strlen(lext))/2);i++){
        if ((lext[i]==lext[strlen(lext)-i-1]) 
            || (lext[i]==tolower(lext[strlen(lext)-i-1])) 
            || (lext[strlen(lext)-i-1]==tolower(lext[i])))
            c+=1;
    }
    int rez=strlen(lext)/2;
    free (lext);

    if (c==rez)
        return 1;
    return 0;
}
