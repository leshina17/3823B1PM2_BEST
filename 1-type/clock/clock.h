int get_time(long long angle) {
    int xch,xm,xs,x;
    x=angle/6;
    if (x<60)
        return x;
    xch=(int)(x/(60*60));
    xm=(int)(x/60);
    xs=x-((int)(x/60))*60;
    return xch*10000+xm*100+xs;
}