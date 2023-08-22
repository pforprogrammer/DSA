// LIFO ,FILO
 #include <iostream>
 #include <stack>
 using namespace std;

 int main() {
   stack<string> s;
   s.push("kami");
   s.push("hassan");
   s.push("zaidi");
   cout<<"first element in stack is : "<<s.top()<<endl;
   s.pop();
   cout<<"first element in stack is : "<<s.top()<<endl;
   cout<<"size of stack is "<<s.size()<<endl;
   cout<<"is stack is empty "<<s.empty()<<endl;
     return 0;
 }
// output is :
// first element in stack is : zaidi
// first element in stack is : hassan
// size of stack is 2
// is stack is empty 0


//queue.......................
#include <iostream>
#include <queue>
using namespace std;

int main() {
   queue<string> s;
   s.push("kami");
   s.push("hassan");
   s.push("zaidi");
   cout<<"first element in stack is : "<<s.front()<<endl;
   s.pop();
   cout<<"first element in stack is : "<<s.front()<<endl;
   cout<<"size of stack is "<<s.size()<<endl;
   cout<<"is stack is empty "<<s.empty()<<endl;
    return 0;
}
// output is :
// first element in stack is : kami
// first element in stack is : hassan
// size of stack is 2
// is stack is empty 0

