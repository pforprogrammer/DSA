//program to shift all zeros to end
#include <iostream>
using namespace std;
void shift0s(int arr[],int size){
    int j=0;
    for(int i=0; i<size; i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[8]={1,2,0,8,7,0,6,0};
    int size= sizeof(arr)/sizeof(int);
    shift0s(arr,size);
    return 0;
}
