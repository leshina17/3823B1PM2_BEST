#include <math.h>

void reverse_array(int* array, int size){
    if (size==0)
        return;
    reverse_array(array+1,size-1);
}
