//Stack implement using class
#include <iostream>
using namespace std;
class stack{
    int* arr;
    int top;
    int size;
    public:
    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int val){
        if(top < size){
            cout<<val<<" is added to stack"<<endl;
        arr[++top] = val;
        }else{
            cout<<"array is full "<<endl;
        }
    }
    void pop(){
        if(top>-1 && top<size){
       int temp = arr[top--];
        cout<<temp<<" is removed from stack "<<endl;
    }
        
    }
    bool isempty(){
        if(top == -1){
            return true;
        }
        return false;
    }
    bool isfull(){
        if(top == size){
            return true;
        }
        return false;
    }
    int toop(){
        if(top<size){
        return arr[top];
        }else{
            cout<<"error"<<endl;
        }
    }
    void display(){
        if(top> -1 && top<size){
            cout<<"According to LIFO principle "<<endl;
            for(int i= top; i>=0; i--){
                cout<<arr[i]<<" , ";
            }
        }
    }
};
int main() {
    stack s(5);
    s.push(12);
    s.push(18);
    s.push(13);
    s.push(14);
    s.push(15);
    s.pop();
  //  s.push(16);
  s.pop();
    cout<<"element in top is "<<s.toop()<<endl;
    if(s.isfull()){
        cout<<"stack is full "<<endl;
    }else{
        cout<<"stack has some memory in it "<<endl;
    }
    s.display();
    return 0;
}
// output is :
// 12 is added to stack
// 18 is added to stack
// 13 is added to stack
// 14 is added to stack
// 15 is added to stack
// 15 is removed from stack 
// 14 is removed from stack 
// element in top is 13
// stack has some memory in it 
// According to LIFO principle 
// 13 , 18 , 12 , 








// stack implement using array
#include <iostream>
using namespace std;
#define size 50
int arr[size];
int top = -1;
void push(int val){
    if(top <50){
    arr[++top] = val;
        
    }
}
void pop(){
    if(top == -1){
        cout<<"There is no element in stack "<<endl;
    }else{
    top--;
    }
}
void display(){
    if(top == -1){
        cout<<"Empty stack "<<endl;
    return;
    }
    for(int i=top; i>=0; i--){
        cout<<arr[i]<<" , ";
    }cout<<endl;
}
void isfull(){
    if(top == size-1){
    cout<<"stack is full "<<endl;
    }else{
        cout<<"stack has some memory"<<endl;
    }
    
}
void Top(){
    cout<<"value on top in stack is "<<arr[top];
}
void isempty(){
    if(top == -1){
 cout<<"stack is empty "<<endl;
    }else{
    cout<<"stack is not empty "<<endl;    
    }
    
}
int main() {
    cout<<"welcome to LIFO's Life "<<endl;
    push(20);
    push(33);
    push(12);
    push(99);
    pop();
    push(102);
    pop();
    display();
    isfull();
    isempty();
 Top();
    return 0;
}
// output is :
// welcome to LIFO's Life 
// 12 , 33 , 20 , 
// stack has some memory
// stack is not empty 
// value on top in stack is 12






//Stack using Linked List
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor 
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};
class stackk{
    private:
    Node* top;
    public:
    stackk(){
        top = NULL;
    }
    void push(int data){
        cout<<data <<" is inserted at top "<<endl;
        if(top == NULL){
        Node* newnode = new Node(data);
        top = newnode;
        return;
        }
        
        Node* newnode = new Node(data);
     newnode->next = top;
        top = newnode;
        
    }
    void pop(){
    if(top == NULL){
        cout<<"stack is empty "<<endl;
    }else{
        Node* temp = top;
        top = top->next;
        temp->next = NULL;
        cout<<temp->data <<" is removed from stack"<<endl;
        delete temp;
    }
        
    }
    void display(){
        if(top != NULL){
        cout<<"elements in stack are :"<<endl;
     Node* print = top ;
     while(print != NULL){
         cout<<print->data<<" , ";
         print = print->next;
     }cout<<endl;
    }else{
        cout<<"stack is empty"<<endl;
    }
    }
    int topp(){
        if(top != NULL){
        int temp = top->data;
        return temp;    
        }
        
    }
    bool isempty(){
        if(top == NULL ){
            return true;
        }
        return false;
    }
};
int main() {
    stackk st;
    st.push(6);
    st.push(7);
    st.push(8);
    st.display();
    st.pop();
    st.display();
    cout<<"element on the top is "<<st.topp()<<endl;
    if(st.isempty()){
        cout<<"stack is empty "<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}
// output is :
// 6 is inserted at top 
// 7 is inserted at top 
// 8 is inserted at top 
// elements in stack are :
// 8 , 7 , 6 , 
// 8 is removed from stack
// elements in stack are :
// 7 , 6 , 
// element on the top is 7
// stack is not empty
