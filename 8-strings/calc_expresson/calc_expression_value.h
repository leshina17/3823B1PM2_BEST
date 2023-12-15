#include <math.h>
#include <string.h>

int calculate_expression(char exp[]){
    int x=0;
    int arr[10];
    for (int i=0; i<strlen(exp); i+2){
        for (int j=0; j<10; j++){
            if (i%2==0){
                arr[j]=exp[i];
            }
        }
    }
    x=arr[0];
    for (int i=1; i<strlen(exp); i+2){
        for (int j=0; j<10; j++){
            if (exp[i]=='+')
                x=x+arr[j+1];
            if (exp[i]=='-')
                x=x-arr[j+1];
        }
    }
    return x;
    //return 0;
}
