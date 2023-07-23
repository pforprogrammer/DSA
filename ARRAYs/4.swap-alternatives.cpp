//Program to swap alternatives
#include <iostream>
#include <cmath>
using namespace std;
void swapalt(int arr[],int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main() {
    int arr[6]={1,2,3,4,5,6};
    swapalt(arr,6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
//output :
//2 1 4 3 6 5
