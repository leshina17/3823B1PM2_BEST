long fib(int m){
    int s;
    s=2;
    int a[1000]={1,1};
    for (int i=2;i<=m;i++){
        a[i]=a[i-2]+a[i-1];
        s+=a[i];
    }
    return s;
}