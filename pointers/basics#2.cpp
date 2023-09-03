#include <iostream>
using namespace std;
int main() {
   int arr[5] = {9,2,3,4,5};
   
   
   
  //print the address of arr && the address of first location of an array with "&" operator
  cout<<"address of arr (first loaction of an array ) is : "<<arr<<endl;
  cout<<"address of arr[0] (using & operator) in array is : "<<&arr[0]<<endl;
  cout<< arr <<" = "<<&arr[0]<<endl;       //address equal to address
  //print the value at arr(address) with the help of * operator
  cout<<"value at arr(with the help of * operator) is : "<<*arr<<endl;
  cout<<arr[0] <<" = "<<*arr<<endl;        //first value = first value
  cout<<*arr+1<<endl;  // increments 0ne in the first value of an array 9+1 = 10
  cout<<*(arr+1)<<endl; // print the second value of an array which is 2
  cout<<arr[2]<<endl; // print value at 2->index
  cout<<*(arr+2)<<endl; // it also prints value at 2 index 0 + 2 = 2 index
   
  //formula is :
  //    arr[i] == *(arr+ i)  or  i[arr] = *(i + arr);
  //so prove is
  int i=3;
  cout<<arr[i]<<"  ==  "<<*(arr + i)<<"  OR  "<<i[arr]<<" == "<<*(i+arr)<<endl;
   
  cout<<endl;
  cout<<"phase # 2"<<endl;
  //phase 2
   
  int temp[10];    // make temp arr of 10 location
  cout<<"size of temp.. 10*4(byte each) = 40 = "<<sizeof(temp)<<endl;
  cout<<"size of 1st element of temp array is "<<sizeof(*temp)<<endl;
  cout<<"size of address of 1st element of temp array is "<<sizeof(&temp)<<endl;
  int *ptr = &temp[0];
  cout<<"size of ptr (where ptr points 1st location of temp array) is "<<sizeof(ptr)<<endl;
  cout<<"size of 1st element which ptr  points is "<<sizeof(*ptr)<<endl;
  cout<<"size of address of 1st element which ptr points is "<<sizeof(&ptr)<<endl;
    
    int a[14]={0};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
     int *p = &a[0];
     cout<<p<<endl;
     cout<<"it prints 0 which is first value :"<<*p<<endl;
     cout<<"address of pointer which contain the address of first location of a(arr) :"<<&p<<endl;
    
    int b[7]={0};
    //error
  // b = b + 1;  // b starts with 2nd value not first  // not changes due to "symbol table" property of array
  int *pp = &b[0];
  cout<<"before "<<pp<<endl;
  pp++;  //pp = pp + 1;  // now pp point to the 2nd element of b arr (increments 4 bytes)
  cout<<"after increments four bytes (or move to next location ) address is: "<<pp<<endl;
   
    
   return 0;
}
// output is :
// address of arr (first loaction of an array ) is : 0x7ffd26430010
// address of arr[0] (using & operator) in array is : 0x7ffd26430010
// 0x7ffd26430010 = 0x7ffd26430010
// value at arr(with the help of * operator) is : 9
// 9 = 9
// 10
// 2
// 3
// 3
// 4  ==  4  OR  4 == 4

// phase # 2
// size of temp.. 10*4(byte each) = 40 = 40
// size of 1st element of temp array is 4
// size of address of 1st element of temp array is 8
// size of ptr (where ptr points 1st location of temp array) is 8
// size of 1st element which ptr  points is 4
// size of address of 1st element which ptr points is 8
// 0x7ffd2642ffa0
// 0x7ffd2642ffa0
// 0x7ffd2642ffa0
// 0x7ffd2642ffa0
// it prints 0 which is first value :0
// address of pointer which contain the address of first location of a(arr) :0x7ffd2642ff98
// before 0x7ffd2642ff70
// after increments four bytes (or move to next location ) address is: 0x7ffd2642ff74
