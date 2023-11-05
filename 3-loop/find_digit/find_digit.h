#include <math.h>

char find_digit(double nn, char d){
    int s, x, r;
    s=0;
    x=0;
    r=0;
    long long n;
    n=nn;
    if ((d<0)||(d>9))
        return -1;
    for (int i=0;n>0;i++){
        s++;
        n/=10;
    }
    for (int i=1;i<s+1;i++){
        if (nn>=1){
            x=(int)(nn/(pow(10,s-i)))%10;
            if (x==d){
                r=i;
                break;
            }
        }
    }
    if (r==0){
        nn=nn-(int)nn;
        for (int i=s+1;nn>0;i++){
            x=(int)(nn*10);
            nn=nn*10-x;
            if (x==d){
                r=i+1;
                break;
            }
        }
    }
    return r;
}