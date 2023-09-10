//queue by linked list
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
class queue{
    private:
    Node* front;
    Node* back;
    public:
    queue(){
        this->front = NULL;
        this->back = NULL;
    }
    void push(int val){
        if(back == NULL){
            Node* newnode = new Node(val);
            cout<<newnode->data <<" is inserted at queue"<<endl;
            back = newnode;
            front = newnode;
            return;
        }
        Node* temp = back;
        Node* nodet = new Node(val);
        cout<<nodet->data <<" is inserted at queue"<<endl;
        back->next = nodet;
        back = nodet;
    }
    void pop(){
        if(front == NULL ){
            cout<<"overflow"<<endl;
        }else{
            Node* del = front;
            
            front = front->next;
            del->next = NULL;
            cout<<del->data<<" is removed from queue "<<endl;
            delete del;
        }
    }
    int peek(){
        if(front == NULL){
            cout<<"Overflow"<<endl;
        }else{
            return front->data;
        }
    }
    bool isempty(){
        if(back == NULL || front == NULL){
            return true;
        }
        return false;
    }
};

int main() {
    queue q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.pop();
    cout<<"Is queue is empty yes(1) or Not(0) "<<q.isempty()<<endl;
    cout<<"peek element is "<<q.peek()<<endl;
    return 0;
}
// output is :
// 4 is inserted at queue
// 5 is inserted at queue
// 6 is inserted at queue
// 7 is inserted at queue
// 4 is removed from queue 
// Is queue is empty yes(1) or Not(0) 0
// peek element is 5







// queue by class
#include <iostream>
using namespace std;
class queue{
    int* arr;
    int front;
    int back;
    int size;
    public:
    queue(int s){
        size = s;
        arr = new int[size];
        front = -1;
        back = -1;
    }
    void push(int val){
        if(back == -1){
            front++;
        }
        if(back < size-1){
            cout<<val << " is inserted into queue"<<endl;
        arr[++back] = val;
        
    }else{
        cout<<"queue is full "<<endl;
    }
}
    void pop(){
        if(back == -1 ||   front > back){
            cout<<"queue is empty "<<endl;
        }else{
        cout<<arr[front++]<<" is removed from queue"<<endl;
    }}
    int peek(){
        if(front == -1  || front >back){
            cout<<" none"<<endl;
            return 0;
        }
        return  arr[front];
    }
    bool isempty(){
        if(back == -1 || front > back){
            return true;
        }
        return false;
    }
};
int main() {
    queue q(5);
   q.push(1);
    q.push(2);
    q.push(3);
    q.push(7);
    q.push(9);
    q.push(11); // not push due to queue is full
    cout<<"peek element is "<<q.peek()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<"peek element is "<<q.peek()<<endl; 
    cout<<"Is queue is empty yes(1) or not(0) "<<q.isempty()<<endl;
    return 0;
}
// output is :
// 1 is inserted into queue
// 2 is inserted into queue
// 3 is inserted into queue
// 7 is inserted into queue
// 9 is inserted into queue
// queue is full 
// peek element is 1
// 1 is removed from queue
// 2 is removed from queue
// 3 is removed from queue
// 7 is removed from queue
// 9 is removed from queue
// peek element is  none
// 0
// Is queue is empty yes(1) or not(0) 1
