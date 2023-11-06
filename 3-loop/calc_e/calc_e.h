#include <math.h>

unsigned long long calc_e(char order){
    double e=1, t=1;
    int it=0;
    double ee=2.718281828459045;
    ee=(int)(ee*pow(10,order))/pow(10,order);
    for (int i=1;i<=100000000;i++){
        e=pow((1.0+1.0/i),i);
        if(e>=ee){
        it=i;
        break;}
    }

    return it;
}