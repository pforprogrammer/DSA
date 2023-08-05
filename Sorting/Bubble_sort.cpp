#include <iostream>
using namespace std;
void Bubble_sort(int arr[],int size){
    int temp=0;
    for(int pass=0; pass<size-1; pass++){
        for(int i=0; i<size - pass-1; i++){//due to after every pass largest element moves to end so it not swap last elements 
            if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
                
            }
    }
}
int main() {
    int size=6;
    int arr[size]={10,9,11,6,15,2};
    Bubble_sort(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// output is 2,6,9,10,11,15
// Best Case: O(n)
// Average Case: O(n^2)
// Worst Case: O(n^2)
