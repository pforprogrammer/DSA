#include <iostream>
#include <cmath>
using namespace std;
void sort01(int arr[],int size){
    int left=0; int right=size-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        
        if(left<right){
            swap(arr[left],arr[right]);
            right--;
            left++;
        }
    }
}

int main() {
    int arr[8]={1,0,0,0,1,0,1,0};
    sort01(arr,8);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" , ";
    }
    
    return 0;
}
//output :
// 0,0,0,0,0,1,1,1
