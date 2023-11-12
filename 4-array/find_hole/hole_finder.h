#include <math.h>

int hole_finder(int a[], int l, int w){
   int size,el;
   size=l*w;
   int r,n;
   int c=0;
   int b=0;
   int min=10000;
   for (int i=0;i<size;i++){
    if ((a[i]<a[i-1])&&(a[i]<a[i-w])&&(a[i+w+1])&&(a[i]<a[i-w-1])&&(a[i]<a[i+1])&&(a[i]<a[i+w])&&(a[i+w+1])&&(a[i]<a[i-w+1])){
        n=a[i];
    if (n<min){
        min=n;
        el=i;
    }
   }
   }
   c=el/w;
   b=el%w;
    return c*100+b;
}