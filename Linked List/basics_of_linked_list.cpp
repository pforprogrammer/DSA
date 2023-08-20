#include <iostream>
using namespace std;
class Node{
    public:
     int data;
    Node* next;
    
   
    // constructor which initilize the value and pointer of node
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
//display() to print the elements of a linked list
void display(Node* &head){
    Node* print = head;
    while(print != NULL){
        cout<<print->data<<" , ";
        print=print->next;
    }
    cout<<endl;
}
// func() to insert value from back 3<-2<-1
void push_back(Node* &head, int data){
    Node* back = new Node(data);
    back->next= head;
    head = back;
    cout<<head->data<<" is added in list from back "<<endl;
}

//func() to insert value from front 1->2->3
void push_front(Node* &tail, int data){
    Node* front = new Node(data);
    tail->next=front;
    tail=front;
    cout<<tail->data<<" is added to node in front"<<endl;
}

// insert() at any position
void insert(Node* &head, Node* &tail, int pos, int data){
   cout<<data<<" is successfull added at "<<pos<<" location"<<endl;
   Node* temp = head;
    if(pos==1){
        push_back(head,data);
    }
    Node* put = new Node(data);
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next== NULL){
        push_front(tail,data);  // insert at last position
    }else{
    put->next=temp->next;    //else insert at any given position
    temp->next=put;
    }
}
// program to delete  any node
void Delete(Node* &head, Node* &tail, int pos){
    cout<<"success full delete the node of "<<pos<<"th loacation"<<endl;
    Node* de = head;
    int cnt=1;
    if(pos== 1){
        head=head->next;  // update head to 2nd  node
        de->next=NULL;
        delete de;          // delete first node
    }else{
        Node* pre = NULL;
        Node* cur = head;
        while(cnt<pos){ // go to the position
            pre=cur;
            cur=cur->next;
            cnt++;
        }
        if(cur->next == NULL){  //if the position is at last the update the value of tail
            tail=pre;
        }
        pre->next=cur->next;
        cur->next=NULL;
        cout<<cur->data<<" is deleted successfully "<<endl;
        delete cur;
    }
    
}
int main() {
   Node* newnode= new Node(19);  // makes first node
   cout<<" you successfull creates a first node with value "<<newnode->data<<endl;
   
  Node* head = newnode;     //creates a head as pointer point always first value
 Node* tail = head;  // creates tail for insert values at front
 display(head);
 push_back(head,11); // insert 11 from last
 display(head);
 push_front(tail,7); // insert 7 from front
 display(head);
 insert(head,tail,4,33);  //insert 33 at 4th location
 display(head);
 Delete(head,tail,4); //delete node of 4th location 
  display(head);  // display all node's values
  cout<<endl;
  cout<<"value of tail is : "<<tail->data<<endl;   //update the value of tail after delete last
  cout<<"value of head is : "<<head->data<<endl;
  
    return 0;
}
// output is : 
// you successfull creates a first node with value 19
// 19 , 
// 11 is added in list from back 
// 11 , 19 , 
// 7 is added to node in front
// 11 , 19 , 7 , 
// 33 is successfull added at 4 location
// 33 is added to node in front
// 11 , 19 , 7 , 33 , 
// success full delete the node of 4th loacation
// 33 is deleted successfully 
// 11 , 19 , 7 , 
// value of tail is : 7
// value of head is : 11
