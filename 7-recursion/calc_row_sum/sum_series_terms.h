#include <math.h>

double sum(int n){
    if ((n==-1) || (n==0))
        return -1;
    if (n==1)
        return 1;
    double summ=0;
    summ=summ+sum(n-1)+(double)1/n;
    return summ;
}
