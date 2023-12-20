#include <math.h>
#include <string.h>

int calculate_expression(char str[]){
    int sum=0;
    int rez=0;
    int index=0;
    char buffer[20];
    for (int i=0; i<strlen(str)-1; i++){
        if ((str[i]==str[i+1]) || ((str[i]==43) & (str[i+1]==45)) 
        || ((str[i]==45) & (str[i+1]==43)))
            return -1;
    }
    for (int i=0; i<strlen(str); i++){
        
        if ((str[i]!=45) && (str[i]!=43))
            sum+=str[i]-48;
    }
    return sum;
}
