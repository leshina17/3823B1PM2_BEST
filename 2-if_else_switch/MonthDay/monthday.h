int monthday(int month, int year){
    int d;
    if ((month==2)&&(year%4==0))
        month=20;
    if ((month==2)&&(year%4!=0))
        month=21;
    switch(month){
        case 1: d=31; break;
        case 3: d=31; break;
        case 4: d=30; break;
        case 5: d=31; break;
        case 6: d=30; break;
        case 7: d=31; break;
        case 8: d=31; break;
        case 9: d=30; break;
        case 10: d=31; break;
        case 11: d=30; break;
        case 12: d=31; break;
        case 20: d=29; break;
        case 21: d=28; break;
        default: return 0;
    }
    return d;
}