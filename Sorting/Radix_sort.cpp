#include <iostream>
using namespace std;

void count_sort(int arr[],int size,int pos){
   
  
    int count[10]={0};
    
    for(int i=0; i<size; i++){
        ++count[(arr[i]/pos)%10];
    }
    for(int i=1; i<10; i++){
        count[i]=count[i]+count[i-1];
    }
    int output[size];
    for(int i=size-1; i>=0; i--){
       output[--count[(arr[i]/pos)%10]]=arr[i];
    }
    for(int j=0; j<size; j++){
        arr[j]=output[j];
    }
}
void sort(int arr[], int size){
    int k=arr[0];
      for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            k=arr[i];
        }
    }
    for(int pos=1; k/pos>0; pos=pos*10){
       count_sort(arr,size,pos);
    }
}
int main() {
    int size=8;
    int arr[size]={422,213,12,1,111,312,124,15};
    sort(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
