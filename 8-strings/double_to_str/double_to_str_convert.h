#include <math.h>
#include <string.h>
#include <stdlib.h>

char* convert(double n){
    char str[50];
    sprintf(&str, "%.*Lf",n);
    return str;
}
