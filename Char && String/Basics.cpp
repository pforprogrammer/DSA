#include <iostream>
using namespace std;
void reverse(char name[], int size){
        int s=0; int e=size-1;    
        while(s<=e){
            swap(name[s++],name[e--]);
        }
        cout<<name<<endl;
}

int length(char name[]){
    int i=0; int count = 0;
    while(name[i] != '\0'){
        i++;
        count++;
    }
    return count;
}
int main() {
   char name[20];
   cout<<"enter your name "<<endl;
   cin>>name;       // it stop print when it get "space " , "enter " or "tab"
   
   cout<< " length of string is " << length(name) <<endl;
   
//     int l = length(name);
//   cout<<"after reverse it the answer is "<<endl;
//   reverse(name,l);
    // output is : nassah
   
   cout<<"your name is : "<<name<<endl;
   name[2]='\0';  //put null at the second index of name char array
   cout<<"your name is : "<<name<<" after put null at second index "<<endl;  // after second index all is garbage value
    cout<< "length of string is " << length(name) <<endl;
  
  
  
  
    return 0;
}
// output: 
// enter your name 
// hassan
// length of string is 6
// your name is : hassan
// your name is : ha after put null at second index 
// length of string is 2
