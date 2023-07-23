//febinoci series is:0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ..
#include <iostream>

using namespace std;
int febi(int n){
    if(n==0 || n==1){
        return n;
    }
    else
    {
        return (febi(n-1)+febi(n-2));
    }
}

int main() {
    int x;
    cout<<"enter number for febi series"<<endl;
    cin>>x;
    for(int i=0; i<x; i++){
        cout<<febi(i)<<" ";
    }
}
