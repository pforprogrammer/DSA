//program to remove sub_string from string 
#include <iostream>
#include <cstring>
using namespace std;
void sub_remove(string &s, string &sub){
    while(s.length() != 0 && s.find(sub) < s.length() ){
        s.erase(s.find(sub), sub.length());
    }
 
}

int main() {
   string s,sub;
   cout<<"enter a string "<<endl;
   getline(cin,s);
   cout<<"enter a substring to erase from upper "<<endl;
   getline(cin,sub);
   sub_remove(s,sub);
   cout<<s<<endl;
    return 0;
}
