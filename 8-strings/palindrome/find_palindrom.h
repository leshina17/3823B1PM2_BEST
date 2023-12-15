#include <math.h>
#include <string.h>
#include <ctype.h>

int is_palindrom(char text[]){
    int c;
    for (int i=0; i<((strlen(text))/2);i++){
        if ((text[i]=text[strlen(text)-i-1]) || (text[i]=tolower(text[strlen(text)-i-1])) || (text[strlen(text)-i-1]=tolower(text[i])))
            return 1;
        else 
            return 0;
    }
}
