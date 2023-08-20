//Array.....................................................(static)
#include <iostream>
#include <array>
using namespace std;
int main() {
   array<int,4> a={11,43,2,5};
   int size=a.size();
   for(int i=0; i<size; i++){
       cout<<a[i]<<" , ";
   }cout<<endl;
   cout<<"element at index 1 is "<<a.at(1)<<endl;
   
   cout<<"front element is "<<a.front()<<endl;
   cout<<"last element is "<<a.back()<<endl;
   cout<<"is array is empty "<<a.empty()<<endl;
    return 0;
}
//output 
// 11 , 43 , 2 , 5 , 
// element at index 1 is 43
// front element is 11
// last element is 5
// is array is empty 0

//Vector.....................................................(dynamic)
#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> v;
   //capacity()
   cout<<"capacity is "<<v.capacity()<<endl;
   //push_back() enter from last
   v.push_back(1);
   cout<<"capacity is "<<v.capacity()<<endl;
   v.push_back(33);
   cout<<"capacity is "<<v.capacity()<<endl;
   v.push_back(5);
   cout<<"capacity is "<<v.capacity()<<endl;
   //size() # of elements in vector
   cout<<"size is "<<v.size()<<endl;
   //at() to get element at any index
   cout<<"element at index 2 is "<<v.at(2)<<endl;
   //front() to get first element of vector
   cout<<"first element of an array is "<<v.front()<<endl;
   //back() to get last element of an vector
   cout<<"last element of an array is "<<v.back()<<endl;
   cout<<"before pop() "<<endl;
   for(int i:v){
       cout<<i<<" , ";
   }
   //pop_back() of pop last value of an vector
   v.pop_back();
   
    cout<<endl<<"after pop() "<<endl;
   for(int i:v){
       cout<<i<<" , ";
   }
   
   cout<<endl<<"clear element of an array "<<endl;
   //clear() to delete all value of an vector
   v.clear();
     cout<<"size is "<<v.size()<<endl;
     cout<<"capacity is "<<v.capacity()<<endl; //does not clear capacity (memroy assign to vector)
   //make a vector v2 an initialize the 5 values of it with 1
     vector<int> v2(5,1);
      for(int i:v2){
       cout<<i<<" , ";
      }cout<<endl;
      //make new vactor v3 and copy/intilize the value's of v2 in it
       vector<int> v3(v);
          for(int i:v2){
       cout<<i<<" , ";
   }
    return 0;
}
//output :
// capacity is 0
// capacity is 1
// capacity is 2
// capacity is 4
// size is 3
// element at index 2 is 5
// first element of an array is 1
// last element of an array is 5
// before pop() 
// 1 , 33 , 5 , 
// after pop() 
// 1 , 33 , 
// clear element of an array 
// size is 0
// capacity is 4
// 1 , 1 , 1 , 1 , 1 , 
// 1 , 1 , 1 , 1 , 1 , 

