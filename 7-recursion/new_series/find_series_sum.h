#include <math.h>

double find_sum_elements_series(int n){
    double sum=0;
    if (n<0)
        return 0;
    while (n!=0){
        sum+=(find_sum_elements_series(n-1)+1)/n;
    }
    return sum;
}
