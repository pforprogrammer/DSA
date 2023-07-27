//program to find 2nd largest number of an array
#include <iostream>
#include <limits.h>
using namespace std;
void largest2only(int arr[]){
    int first,second;
    first=second=INT_MIN;
    for(int i=0; i<8; i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i] >= first){
            second=arr[i];
        }
    }
    cout<<"second largest number of an array is "<<second;
}
        

int main() {
   int arr[8]={83,2,5,3,222,5,223,9};
   largest2only(arr);
   

    return 0;
}
