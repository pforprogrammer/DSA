//program to find first and last index of rep.numbers in sor.array
#include <iostream>
using namespace std;
int startin(int arr[],int size,int key){
    
    int s=0; int e=size-1; int m=s+((e-s)/2); int ans=-1;
    while(s<=e){
        if(key==arr[m]){
            ans=m;
            e=m-1;
        }else if(key>arr[m]){
            s=m+1;
        }else if (key<arr[m]){
            e=m-1;
        }
        m=s+(e-s)/2;
        
    }
    return ans;
}
int lastin(int arr[],int size,int key){
    
    int s=0; int e=size-1; int m=s+((e-s)/2); int ans=-1;
    while(s<=e){
        if(key==arr[m]){
            ans=m;
            s=m+1;
        }else if(key>arr[m]){
            s=m+1;
        }else if (key<arr[m]){
            e=m-1;
        }
        m=s+(e-s)/2;
        
    }
    return ans;
}
int main() {
   int arr[8]={1,2,4,4,4,4,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   int key;
   cout<<"enter number to find index of it"<<endl;
   cin>>key;
   int first=startin(arr,size,key);
   int second=lastin(arr,size,key);
   cout<<"start index of "<<key<<" is "<<first<<" last is "<<second<<endl;
    return 0;
}
