#include <math.h>
#include <string.h>
#include <ctype.h> //посмотреть пробелы

int is_palindrom(char text[]){
    int c=0;
    if (strlen(text)==0)
        return 1;
    for (int i=0; i<((strlen(text))/2);i++){
        if ((text[i]==0) || (text[i]==39))
            text[i]=text[i+1];
        if ((text[strlen(text)-i-1]==0)
            || (text[strlen(text)-i-1]==39)){
            text[strlen(text)-i-1]==text[strlen(text)-i-2];
            }
        if ((text[i]==text[strlen(text)-i-1]) 
            || (text[i]==tolower(text[strlen(text)-i-1])) 
            || (text[strlen(text)-i-1]==tolower(text[i])))
            c+=1;
    }
    if (c==strlen(text)/2)
        return 1;
    else  
        return 0;
}
