#include <iostream>
#include <cmath>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot=arr[start]; int i=start+1; int j=end;
    while(i<=j){
        while(arr[i] < pivot && i<=end){
            i++;
        }
        while(arr[j] > pivot && j>=start+1){
            j--;
        }
        if(i<=j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start],arr[j]);
    return j;
}
void Quick_sort(int arr[], int start, int end){
   if(start < end){
       int pi=partition(arr,start,end);
       Quick_sort( arr,  start,pi-1 );
        Quick_sort( arr,  pi+1, end);
   }
   
    
}
int main() {
    int size=8;int s=0; int e=size-1;
    int arr[size]={35,50,15,25,80,20,90,45};
    
    Quick_sort(arr,s,e);
   for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}

//output is : 15 20 25 35 45 50 80 90
