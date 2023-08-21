deque...............................................
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    
    d.push_front(4);
    d.pop_front();
    cout<<"value at index 1 in "<<d.at(1)<<endl;
    cout<<"value at front is "<<d.front()<<endl;
    cout<<"value at back is "<<d.back()<<endl;
    cout<<"is deque is empty "<<d.empty()<<endl;
    
    for(int i:d){
        cout<<i<<" , ";
    }cout<<endl;
    
    cout<<"size of deque before erase"<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
     cout<<"size of deque after erase"<<d.size()<<endl;
    return 0;
}
// output is :
// value at index 1 in 1
// value at front is 2
// value at back is 3
// is deque is empty 0
// 2 , 1 , 3 , 
// size of deque before erase3
// size of deque after erase2



list...................................
#include <iostream>
#include <list>
using namespace std;

int main() {
   list<int> l;
   l.push_back(1);
   l.push_front(2);
   l.push_back(11);
   l.push_front(23);
//   l.pop_front();  removes 23 from list
   for(int i:l){
       cout<<i<<" , ";
   }cout<<endl;
   l.erase(l.begin());
    for(int i:l){
       cout<<i<<" , ";
   }cout<<endl;
   cout<<"size of list is "<<l.size()<<endl;
   
   list<int> n(5,50);
    for(int i:n){
       cout<<i<<" , ";
   }cout<<endl;
   list<int> b(n);
    for(int i:b){
       cout<<i<<" , ";
   }cout<<endl;
    return 0;
}
// output is :
// 23 , 2 , 1 , 11 , 
// 2 , 1 , 11 , 
// size of list is 3
// 50 , 50 , 50 , 50 , 50 , 
// 50 , 50 , 50 , 50 , 50 ,
