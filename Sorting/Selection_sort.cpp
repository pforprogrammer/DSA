#include <iostream>
using namespace std;
void selection(int arr[],int size){
    for(int pass=0; pass<size-1; pass++){
        int min=pass;
        for(int i=pass+1; i<size; i++){
            if(arr[i]<arr[min]){
                min=i;
            }
        }
        if(min!=pass){
            swap(arr[min],arr[pass]);
        }
    }
}
int main() {
   int arr[6]={5,4,3,2,6,1};
   selection(arr,6);
   for(int i=0; i<6; i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
//output is: 1,2,3,4,5,6
