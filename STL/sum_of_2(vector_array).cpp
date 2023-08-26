#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &s){
    int i=0; int e=s.size() -1;
    while(i!=e){
        swap(s[i],s[e]);
        i++; e--;
    }
}
void sum(vector<int> a1, vector<int> a2){
   int  i = a1.size() - 1; int  j= a2.size() - 1;
    vector<int> s;
    int carry = 0;
    int sum = 0;
    while(i>=0 && j>=0){
        int val1 = a1[i]; int val2 = a2[j];
    sum= val1 + val2 + carry;
    carry = sum/10;
    sum = sum%10;
    s.push_back(sum);
    i--; j--;
    
    }
    while(i>=0){
        int sum = a1[i]+carry;
         carry = sum/10;
    sum = sum%10;
    s.push_back(sum);
    i--;
    }
    while(j>=0){
        int sum = a2[j]+carry;
         carry = sum/10;
    sum = sum%10;
    s.push_back(sum);
     
    j--;
    }
    reverse(s);
    for(int k:s){
        cout<<k<<" , ";
    }
}
int main() {
  vector<int> a1 = {1,2,3};
  vector<int> a2 = {2,3};
  sum(a1,a2);
    return 0;
 }
// output : 
// 1,4,6,
