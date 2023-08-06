#include <iostream>
using namespace std;
void shell(int arr[],int n){
    for(int gap=n/2; gap>=1; gap=gap/2){
        for(int j=gap; j<n; j++){
            for(int i=j-gap; i>=0; i=i-gap){
                if(arr[i]<arr[i+gap]){
                    break;
                }else{
                    swap(arr[i],arr[i+gap]);
                }
            }
        }
    }
}
int main() {
    int n=8;
    int arr[n]={6,5,4,3,2,8,7,9};
    shell(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
output is: 2 3 4 5 6 7 8 9
