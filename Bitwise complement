//Bitwise complement
#include <iostream>
using namespace std;
int nigates(int n){
    int mask=0;
    int m=n;
    while(m!=0){
        mask=(mask<<1)|1;
        m=m >>1;
    }
    int ans=(~n)&mask;
}
int main() {
    // Write C++ code here
    cout<<"Bitwise-complement: enter number:"<<endl;
    cout<<nigates(5);

    return 0;
}
