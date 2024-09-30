int faculty(int i){
    if(i == 0){
        return 1;
    }else{
        return i * faculty(i-1);
    }
}

double bi(int n, int k){
   return ((double) ((double) faculty(n) / (double) (faculty(k)* faculty(n-k))));
}