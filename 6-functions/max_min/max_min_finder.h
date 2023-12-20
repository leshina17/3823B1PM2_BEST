#include <math.h>

void get_max_min(int* array, int size, int* pMax, int* pMin){
    int min=10000;
    int max=-100;
    for (int i=0; i<size; i++){
        if (array[i]<min)
            min=array[i];
        if (array[i]>max)
            max=array[i];
    }
    *pMin=min;
    *pMax=max;
}
