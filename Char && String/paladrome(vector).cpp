//program to check wheather the vector(char) is paladrome or not
#include <iostream>
#include <vector>
using namespace std;
bool paladrome(vector<char> &c){
    int s=0; int e=c.size()-1;
    while(s<=e){
        if(c[s] != c[e]){
            return false;
        }else{
            s++; e--;
        }
    }
    return true;
}
int main() {
    vector<char> c = {'m','o','o','o','o','m'};
    if(paladrome(c)){
        cout<<"vector is paladrome "<<endl;
        
    }else{
        cout<<" vector is not paladrome "<<endl;
    }
    return 0;
}
// output:
// vector is paladrome
