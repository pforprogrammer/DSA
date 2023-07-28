//program to find mountain element index
#include <iostream>
using namespace std;

int mountain(int arr[],int size){
    
    int s=0; int e=size-1; int m=s+((e-s)/2); 
    while(s<e){     // do not use equal due to If we find mid of ans it again compares..
        if(arr[m]<arr[m+1]){
            s=m+1;
        }else {
            e=m;
        }
        m=s+((e-s)/2);
        
        
       }
    return s;
}
int main() {
   int arr[8]={1,2,4,5,6,3,2,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   int ans=mountain(arr,size);
   cout<<"mountain element is at "<<ans<<" index";
   return 0;
}
