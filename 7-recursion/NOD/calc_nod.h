#include <math.h>

int nod(int f, int s){
    if ((f<=0) || (s<=0))
        return -1;
    if (f%s==0) 
        return s;
    else 
        s=nod(s,f%s);
    return s;
}
