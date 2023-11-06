#include <math.h>

int find_elem(int l, int r, int n, int mait){
    int i = 0; //Счётчик итераций
    int x, t, s, d;
    x=0; t=0; s=0; d=0;
    s=l;
    for (int ii=1;ii<mait+1;ii++){
        x=(l+r)/2;
        if (x==n){
            t=ii;
            break;
        }
        if (x<n)
            l=x+1;
        else 
            r=x-1;
    }
    i=(n-s)*t;
    return i; //НЕ МЕНЯТЬ!
}