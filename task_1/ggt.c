int ggt(int a, int b){
    if(a == b){
        return a;
    }
    if (a > b){
        return ggt(a-b, b);
    }else{
        return ggt(a, b-a);
    }
}