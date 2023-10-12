int reverse(int number) {
    int arr[4]={number/1000,number/100,number/10,number%10};
    if (arr[3]!=0)
        return arr[3]*1000+arr[2]*100+arr[1]*10+arr[0];
    if (arr[3]==0){
        return arr[2]*100+arr[1]*10+arr[0];
        if (arr[2]==0){
            return arr[1]*10+arr[0];
            if (arr[1]==0)
                return arr[0];
        }
    }
}

double decomposition(int number) {
    return 0; // Not implementation
}

int append(int number, int start, int end) {
    return 0; // Not implementation
}
