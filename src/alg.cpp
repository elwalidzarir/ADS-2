int pairs(int a,int b){
    cout<<"("<<a<<","<<b<<")"<<endl;
}
int countPairs1(int* arr,int len,int value){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]+arr[j]==value){
                pairs(arr[i],arr[j]);
            }
        }
    }
}  
