#include <math.h>

double calc_sum_elements(int* arr, int size){
    if (size==-1)
        return -1;
    if (size==0)
        return 0;
    double s=0;
    s=calc_sum_elements(arr, size-1) + arr[size-1];
    return s;
}
