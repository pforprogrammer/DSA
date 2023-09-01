#include <iostream>
using namespace std;
int main() {
    int num = 5;
    cout<<"value of num is "<<num<<endl;
    cout<<"address of num is "<<&num<<endl;
    int *ptr = &num;
    cout<<"value of num is "<<*ptr<<endl;
    cout<<"address of num is "<<ptr<<endl;
    
    // * == dereference operator it give orignal value
    
    
    
    // for double 
    double n = 4.5;
    double *p = NULL;
    p=&n;
    
    cout<<"value of n is "<<*p<<endl;
    cout<<"address of n is "<<p<<endl;
    
    //size of ptr 
    cout<<"size of num is "<<sizeof(num)<<endl;
    cout<<"size of n is "<<sizeof(n)<<endl;
    cout<<"size of ptr is "<<sizeof(ptr)<<endl;
    cout<<"size of p is "<<sizeof(p)<<endl;
    cout<<"size of *ptr is "<<sizeof(*ptr)<<endl;
    //pointer size for all variable is equal to 8byte's but the *ptr size is change according to variable
    int number=3;
    int *pi = &number;
    cout<<"value of number is "<<number<<endl;
    (*pi)++;                                    //increment in number from pointer
    cout<<"value of number is "<<number<<endl;
    
    int *q = pi;                    //copy pointers
    cout<<q <<" q = pi "<<pi<<endl;
cout<<*q <<" *q  =  *pi "<<*pi<<endl;

//concept of increment in address or pointer value

    int i = 8;
    int *pp = &i;
    cout<<"address of i is "<<&i<<"  or  "<<pp<<endl;
    *pp = *pp + 1;
    cout<< "value of pointer after increment  is "<<*pp<<endl;
    pp = pp + 1;            //It increment four bites in address of pointer
    cout<< "value of pointer after increment  in address of pointer is "<<pp;
    return 0;
}
// output is:
// value of num is 5
// address of num is 0x7ffd1c0126c4
// value of num is 5
// address of num is 0x7ffd1c0126c4
// value of n is 4.5
// address of n is 0x7ffd1c0126b8
// size of num is 4
// size of n is 8
// size of ptr is 8
// size of p is 8
// size of *ptr is 4
// value of number is 3
// value of number is 4
// 0x7ffd1c0126b4 q = pi 0x7ffd1c0126b4
// 4 *q  =  *pi 4
// address of i is 0x7ffd1c0126b0  or  0x7ffd1c0126b0
// value of pointer after increment  is 9
// value of pointer after increment  in address of pointer is 0x7ffd1c0126b4
