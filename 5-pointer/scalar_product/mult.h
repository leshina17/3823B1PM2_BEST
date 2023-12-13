#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double c=0;
    int chis=0;
    int kv1=0, kv2=0;
    for (int i=0;i<size;i++){
        kv1+=(vec1[i]*vec1[i]);
        kv2+=(vec2[i]*vec2[i]);
        chis+=(vec1[i]*vec2[i]);
    }
    c=(double)chis/(sqrt(kv1 * kv2));
    double t = acos(c)* 180 / 3.14159265;
   
    return (int)t;
}
