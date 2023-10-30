// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Dequeue{
    private:
    int* arr;
    int size;
    int front;
    int rear;
    public:
    Dequeue(int s){
        size = s;
        this->arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool isfull(){
        if((front == rear+1)|| (front == 0 && rear == size-1)){
            return true;
        }
        return false;
    }
    void enqueuefront(int val){
        if(isfull()){
            cout<<"overflow"<<endl;
            
        }else if(front == -1 && rear == -1){
            front = rear = 0;
            arr[front] = val;
        }else if(front == 0){
            front = size-1;
            arr[front] = val;
        }else{
            front--;
            arr[front] = val;
        }
    }
    
    void enqueuerear(int val){
        if(isfull()){
            cout<<"overflow"<<endl;
        }else if(front == -1 && rear == -1){
            front = rear = 0;
            arr[rear] = val;
        }else if(rear == size-1){
            rear = 0;
            arr[rear] = val;
        }else{
            rear++;
            arr[rear] = val;
        }
    }
    void display(){
        int i = front;
        while(i != rear){
            cout<<arr[i]<<" , ";
            i = (i+1)%size;
        }
        cout<<arr[rear]<<" , ";
    
        cout<<endl;
    }
    
    int frontvalue(){
        return arr[front];
    }
    int rearvalue(){
        return arr[rear];
    }
    bool isempty(){
        if(front == -1 && rear == -1){
            return true;
        }
        return false;
    }
    void dequeuefront(){
        if(isempty()){
            cout<<"deque is empty.."<<endl;
            return;
        }
        if(front == rear){
            cout<<arr[front]<<" is removed from deque."<<endl;
            front--; rear--;
        }else if(front == size-1){
            cout<<arr[front]<<" is removed from deque"<<endl;
            front = 0;
        }else{
            cout<<arr[front]<<" is removed from deque."<<endl;
            front++;
        }
    }
    void dequeuerear(){
        if(isempty()){
            cout<<"deque is empty.."<<endl;
            return;
        }
        if(front == rear){
            cout<<arr[rear]<<" is removed from deque."<<endl;
            front--; rear--;
        }else if(rear == 0){
            cout<<arr[rear]<<" is removed from deque"<<endl;
            rear = size-1;
        }else{
            cout<<arr[rear]<<" is removed from deque."<<endl;
            rear--;
        }
    }    
    
};
int main() {
    Dequeue d(4);
    cout<<"is deque is empty "<<d.isempty()<<endl;
    
    d.enqueuefront(1);
    d.enqueuerear(2);
    cout<<"front value is "<<d.frontvalue()<<endl;
    cout<<"rear value is "<<d.rearvalue()<<endl;
    d.display();
    
    d.dequeuefront();
    d.dequeuerear();
    return 0;
}
// output:
// is deque is empty 1
// front value is 1
// rear value is 2
// 1 , 2 , 
// 1 is removed from deque.
// 2 is removed from deque.
