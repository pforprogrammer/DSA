//program to reverse vector LIFO
#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int s=0 , e=v.size()-1;
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
    cout<<"Before reverse"<<endl;
    for(int i: v){
        cout<<i<<" , ";
    }cout<<endl; 
    
    vector<int> ans = reverse(v);
    cout<<"After reverse"<<endl;
    for(int i: ans){
        cout<<i<<" , ";
    }
    return 0;
}
