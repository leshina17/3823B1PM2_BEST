#include <math.h>
#include <string.h>

int calculate_expression(char str[]){
    int sum=0;
    for (int i=0; i<strlen(str)-1; i++){
        if ((str[i]==str[i+1]) || ((str[i]==43) & (str[i+1]==45)) 
        || ((str[i]==45) & (str[i+1]==43)))
            return -1;
        if (str[0]==45)
            return -1;
    }
    for (int i=0; i<strlen(str); i++){
        if (str[i]==45){
            str[i+1]=(int)(-1)*(str[i]-48);
        }
        if ((str[i]!=45) && (str[i]!=43))
            sum+=str[i]-48;
        else 
            i++;
    }
    return sum;
}
