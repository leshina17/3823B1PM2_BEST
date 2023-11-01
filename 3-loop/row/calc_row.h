long long calc_row(int n, long long k){
    long long r;
    r=0;
    for (int i=1;i<n+1;i++){
        r=i*k;
    }
    if (r> 9223372036854775807)
        return 0;
    else 
        return r;
}