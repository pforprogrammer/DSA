#include <iostream>
using namespace std;
void Insertion_sort(int arr[],int size){
    int i,key,j;
    for(i=1; i<size; i++){
        j=i-1;
        key=arr[i];
        
        while(j>=0 && arr[j] > key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    } 
    
}
int main() {
    int size=6;
    int arr[size]={10,9,11,6,15,2};
    Insertion_sort(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//output is :  2,6,9,10,11,15
