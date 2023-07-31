//program to find down-pivot element in an array
#include <iostream>
using namespace std;
int pivot(int arr[],int f,int l){
   int mid=f+(l-f)/2;
    while(f<l){
        if(arr[mid]>=arr[0]){
            f=mid+1;
        }else{
            l=mid;
        }
        mid=f+(l-f)/2;
    }
    return f;
}
int main() {
    int arr[8]={3,5,7,11,15,1,4,6};
    int ans=pivot(arr,0,7);
    cout<<"ans is an index "<<ans;
    return 0;
}
