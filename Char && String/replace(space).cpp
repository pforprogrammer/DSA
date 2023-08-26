//program to replace spaces with @48
#include <iostream>
#include <cstring>
using namespace std;
void replace(string &s){
    string temp="";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('8');
        }else{
            temp.push_back(s[i]);
        }
    }
    s=temp;
}
int main() {
    string s;
    cout<<"enter string "<<endl;
    getline(cin,s);
    replace(s);
    cout<<s<<endl;
    return 0;
}
