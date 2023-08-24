
//program to reverse vector LIFO from given pos
#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v , int pos){
    int s=pos+1 , e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

int main() {
    
    vector<int> v;
    v.push_back(11);
    v.push_back(9);
    v.push_back(0);
    v.push_back(44);
    v.push_back(13);
    v.push_back(7);
    v.push_back(6);
    v.push_back(17);
    
    cout<<"Before reverse"<<endl;
    for(int i: v){
        cout<<i<<" , ";
    }cout<<endl; 
    
    vector<int> ans = reverse(v,3);
    cout<<"After reverse"<<endl;
    for(int i: ans){
        cout<<i<<" , ";
    }
    return 0;
}
// output:
// Before reverse
// 11 , 9 , 0 , 44 , 13 , 7 , 6 , 17 , 
// After reverse
// 11 , 9 , 0 , 44 , 17 , 6 , 7 , 13 ,
