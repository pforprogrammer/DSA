//binary search simple program
#include <iostream>
using namespace std;
int binarysearch(int arr[],int first, int last,int key){
    int mid;
    while(first<=last){
        mid = first + (last-first)/2;
        if(key==arr[mid]){
            return mid;
        }
        if(key<arr[mid]){
            last = mid-1;
        }else{
            first=mid+1;
        }
        mid = first + (last-first)/2;
    }
    return -1;
    
}
int main() {
  int arr[9]={1,2,3,4,5,6,7,8,9};
  int key;
  cout<<"enter key "<<endl;
  cin>>key;
  int index = binarysearch(arr,0,8,key);
  cout<<key<<" is at "<<index<<" index";
    return 0;
}
