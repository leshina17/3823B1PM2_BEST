#include <math.h>
#include <string.h>

void lower(char* str){
    for (int i=0; i<strlen(str); i++){
        str[i]=tolower(str[i]);
        }
}
