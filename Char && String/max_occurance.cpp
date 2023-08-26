// program to find maimum char repeates
#include <iostream>
using namespace std;

char getmaxi(string s){
    int temp[26] = {0};
  // increament the occurance of character by using temp array of int (26)
    for(int i=0; i<s.length(); i++){
        int ch = s[i];
        int number = 0;
        number = ch - 'a';    //  a-a=0  , b-a=1; 
        temp[number]++;     //  temp[0]++ zero to 1; , temp[1]++ zero to 1 ...
    }
    // find maximum in the temp array (occurance)
    int maxi = -1;
    int ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < temp[i]){
            maxi=temp[i];
            ans = i;
        }
    }
    return 'a'+ans;   //   a+1 = b
}

int main() {
    string s ;
    cout<<"enter a string "<<endl;
    cin>>s;
    cout<<getmaxi(s)<<endl;
    return 0;
}
// output: 
// enter a string 
// Hello World
// l
