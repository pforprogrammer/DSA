#include <iostream>
#include <algorithm>
using namespace std;
void mul(int m){
    cout<<m*2<<"  ";
}
int mult(int n){
    return n*2;
}
int main()
{
    int arr[]={5,3,4,7,8,9,6,1,0,0,0};
    int *ptr;
    ptr=find(arr,arr+11,0);
    cout<<"the value you may find is at "<<ptr-arr<<" location "<<endl;
    
    int n=count(arr,arr+11,0);
    cout<<"there are "<<n<<" zeros in array "<<endl;
    
    sort(arr, arr+11);
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;
    
    int arr2[]={1,3,4,5,7};
    ptr=search(arr , arr+11, arr2 , arr2+4);
    if(ptr==arr+11){
        cout<<"pattern not found "<<endl;}
    else{
        cout<<"found at "<<ptr-arr<<endl;
    }
    
    int dest[16];
    merge(arr ,arr+11, arr2, arr2+5, dest);
    for(int i=0; i<16; i++){
        cout<<dest[i]<<" ";
    }cout<<endl;
    
    cout<<"for greater to smallest "<<endl;
    sort(arr , arr+11 , greater<int>());
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"element of arr2 : after multiply 2 is "<<endl;
    for_each(arr2, arr2+5, mul);
    cout<<endl;
    
    int multip[12];
    
    cout<<"element of arr2 : after multiply 2 is "<<endl;
    transform(arr, arr+11 , multip , mult);
    for(int i:multip){
        cout<<i<<"  ";
    }cout<<endl;

    return 0;
}


// Output
// the value you may find is at 8 location
// there are 3 zeros in array
// 0 0 0 1 3 4 5 6 7 8 9
// fount at 3
// 0 0 0 1 1 3 3 4 4 5 5 6 7 7 8 9
// for greater to smallest 
// 9 8 7 6 5 4 3 1 0 0 0
// element of arr2 : after multiply 2 is 
// 2 6 8 10 14
// element of arr1 : after multiply 2 is
// 18 16 14 12 10 8 6 2 0 0 0 0 

// In summary, a container is a data structure that holds a collection of elements, an iterator is an object that allows you to ,access ,traverse and manipulate the elements in a container, 
// and an algorithm is a function template that performs a specific operation on a range of elements in a container. Together, they provide powerful tools for working with collections of 
// data in C++ programs.
