//pointer and functions
#include <iostream>
using namespace std;
void fun(int *p){
    cout<<"value of p is : "<<*p<<endl;
    cout<<"address of p is : "<<p<<endl;
}
void update(int *p){
    *p = *p + 1;
    p = p+1;
    cout<<"in main the address of p after update is "<<p<<endl;
    
}
void getsum(int arr[], int n){
    int sum = 0;
    cout<<"size : "<<sizeof(arr)<<" due it print the size of address/pointer no array digits"<<endl;
    cout<<"size of first elements is : "<<sizeof(arr[0])<<endl;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"sum is equal to : "<<sum<<endl;
}
int main() {
   int n = 5;
   int *p = &n;
   //fun(p);
   cout<<"before update the address of p is : "<<p<<endl;
   update(p);
   cout<<"after update the address of p is : "<<p<<endl;
   cout<<"value of p after update is : "<<*p<<endl;  // it update 5 to 6
   cout<< "same in (B & A) due to it print the address of pointer in main not fun.."<<endl;
   
   int arr[5] = {1,2,3,4,5};
   getsum(arr,5);
    return 0;
}
// output is :
// before update the address of p is : 0x7ffecf62f054
// in main the address of p after update is 0x7ffecf62f058
// after update the address of p is : 0x7ffecf62f054
// value of p after update is : 6
// same in (B & A) due to it print the address of pointer in main not fun..
// size : 8 due it print the size of address/pointer no array digits
// size of first elements is : 4
// sum is equal to : 15



phase # 2

//char && pointers
#include <iostream>
using namespace std;
int main() {
   int arr[5] = {1,2,3,4,5};
   char ch[6] = "abcde";
   //it prints address of first location of arr
   cout<<"address of arr : "<<arr<<endl;
   //it prints the entire content in char array due to different cout properties for char
   cout<<ch<<endl;
   char *p = &ch[0];
   cout<<p <<endl;          //prints abcde due to diff properties of cout for char
   char temp = 'z';
   char *pp = &temp;
   cout<<pp<<endl;  // it first prints 'z' the after z is all garbage value it prints it until it founds NULL 
    return 0;
}
// output is :
// address of arr : 0x7fff054117e0
// abcde
// abcde
// zabcde    // it first prints 'z' the after z is all garbage value it prints it until it founds NULL
