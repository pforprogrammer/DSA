//priority queue for maximum and minimum
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> maxi;  //desending order
    priority_queue<int, vector<int> , greater<int> > mini;  //assending order
  
    maxi.push(1);
    maxi.push(5);
    maxi.push(3);
    maxi.push(10);
    maxi.push(17);
    int m=maxi.size();
    cout<<"maxi elements "<<endl;
    for(int i=0; i<m; i++){
        cout<<maxi.top()<<" , ";
        maxi.pop();
    }cout<<endl;
    cout<<"is it is empty "<<maxi.empty()<<endl;    
    mini.push(13);
    mini.push(3);
    mini.push(11);
    mini.push(7);
    mini.push(37);
    int n=mini.size();      //size of mini
    cout<<"mini elements is "<<endl;
    for(int i=0; i<n; i++){
        cout<<mini.top()<<" , ";
        mini.pop();
    }cout<<endl;
    cout<<"is it is empty "<<mini.empty()<<endl;
    return 0;
}

// output is :
// maxi elements 
// 17 , 10 , 5 , 3 , 1 , 
// is it is empty 1
// mini elements is 
// 3 , 7 , 11 , 13 , 37 , 
// is it is empty 1




set............

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(0);
    s.insert(8);
    s.insert(1);
    cout<<"elements is set is "<<endl;              //0 1 5 7 8
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
  //  s.erase(s.begin());            //it erase first value    1 5 7 8
    s.erase(++s.begin());
    cout<<"elements is set is "<<endl;          //output is : 0 5 7 8
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"is 5 is present or not "<<s.count(5)<<endl;          //output is 1 (means present)

    return 0;
}
