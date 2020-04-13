first way:
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
second way:
int put_elements_in_order(int* arr,int num_of_elements){//second way
    int box;
    for(int i=0;i<num_of_elements;i++){
        for(int j=i+1;j<num_of_elements;j++){
            if(arr[i]>arr[j]){
                box=arr[i];
                arr[i]=arr[j];
                arr[j]=box;
            }
        }
    }
}
int pairs(int a,int b){
    cout<<"("<<a<<","<<b<<")"<<endl;
}

int countPairs2(int* arr,int len,int value){
    put_elements_in_order(arr,len);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]+arr[j]==value){
                pairs(arr[i],arr[j]);
            }
        }
    }
}
third way:


int pairs(int a,int b){
    cout<<"("<<a<<","<<b<<")"<<endl;
}
int put_elements_in_order(int* arr,int num_of_elements){
  int box;
    for(int i=0;i<num_of_elements;i++){
        for(int j=i+1;j<num_of_elements;j++){
            if(arr[i]>arr[j]){
                box=arr[i];
                arr[i]=arr[j];
                arr[j]=box;
            }
        }
    }
}
int finding_value_in_array(int* arr,int len,int value){
    int first=0;
    int last=len-1;
    int middle=(last+first)/2;
    while (first <= last)
	{
		if(arr[middle] < value){
			first = middle + 1;
		}
		else if(arr[middle] == value){
			return middle;
			break;
		}
		else{
			 last = middle - 1;
		}
		middle = (first + last)/2;

}	if(first > last){
		      middle=-1;
		}
    return middle;
}
int countPairs3(int* arr,int len,int value){

    for(int i=0;i<len;i++){
       int index=finding_value_in_array(arr,len,value-arr[i]);
        if(index!=-1 && index!=i && arr[i]<value-arr[i] ){
            pairs(arr[i],value-arr[i]);
        }
    }
}














