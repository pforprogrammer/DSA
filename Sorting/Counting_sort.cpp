#include <iostream>
using namespace std;
void count_sort(int arr[],int size){
    int k=0;
    for(int i=0; i<size; i++){
        if(arr[i]>arr[i+1]){
            k=arr[i];
        }
    }
    int count[k+1]={0};
    for(int i=0; i<size; i++){
       count[arr[i]]++;
    }
    for(int i=1; i<=k; i++){
        count[i]=count[i]+count[i-1];
    }
    int output[size];
    for(int i=size-1; i>=0; i--){
       output[--count[arr[i]]]=arr[i];
    }
    for(int j=0; j<size; j++){
        arr[j]=output[j];
    }
}
int main() {
    int size=8;
    int arr[size]={4,2,2,1,1,3,4,5};
    count_sort(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//output is : 1,1,2,2,3,4,4,5
