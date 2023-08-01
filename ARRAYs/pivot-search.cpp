//program to find element in sorted rotated array using binary search with the help of pivot
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int pivot(int arr[],int size){
     int s=0; int e=size-1; int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int bs(int arr[], int s ,int e, int key){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}




int find(int arr[],int size, int key){
   int p= pivot(arr,size);
   if(key >=arr[p] && key <=arr[size-1]){
       return bs(arr,p,size-1,key);
          }else{
              return bs(arr,0,p-1,key);
          }
}
    
    
int main() {
    int size = 5;
    int key;
   int arr[size]={7,8,1,3,5};
   cout<<"enter number to find in rotated sorted array by pivot "<<endl; 
   cin>>key;
   cout<<"number is at "<<find(arr,size,key)<<" index"<<endl;
    return 0;
}
