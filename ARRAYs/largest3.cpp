//program to find three largest elements in an array
#include <iostream>
#include <limits.h>
using namespace std;
void largest3(int arr[]){
    int first,second,third;
    first=second=third=INT_MIN;
    
    for(int i=0; i<8; i++){
        if(arr[i]>first){
            third=second;
            second = first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third && arr[i]!=second){
            third=arr[i];
        }
    }
    cout<<first<<","<<second<<","<<third;
}
        

int main() {
   int arr[8]={83,2,5,3,22,5,223,9};
   largest3(arr);
   

    return 0;
}
