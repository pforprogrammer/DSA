//program to find unique element from array
#include <iostream>
#include <cmath>
using namespace std;
int unique(int arr[],int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main() {
    int size=7;
    int arr[size]={1,2,3,2,1,3,8};
    cout<<"unique element is :"<<unique(arr,size);
    
    return 0;
}
//output :
//unique element is :8
