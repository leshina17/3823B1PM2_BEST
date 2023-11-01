int num_invers(int num){
    int n1,n;
    if (num>=0){
        n=num%10;
        n1=n;
        num=num/10;
        while (num>0){
            n=num%10;
            num=num/10;
            n1=n1*10;
            n1=n1+n;
        }
    return n1;
    }   
    else 
        return 0;
}