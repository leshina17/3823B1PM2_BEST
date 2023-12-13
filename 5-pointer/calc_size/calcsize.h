#include <math.h>

int calcsize(void* memory){
    int f,s,r;
    char* pChar = (char*)memory;

    for (int i=0;;i++){
        if (pChar[i]==11)
            f=i;
        if (pChar[i]==47){
            s=i;
            r=s-f;
            break;
        }
    }
    return s+r;
}
