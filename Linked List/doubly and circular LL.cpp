// // find key in (single)linked list
//     bool search(Node* &head , int key){
//         Node* temp = head;
//         while(temp != NULL){
//             if(temp->data == key){
//                 return true;
//             }
//             temp= temp->next;
//         }
//         return false;
    //}
    

//  reverse (single)linked list 
// void reverse(Node* &head){
//     Node* pre = NULL;
//     Node* curr = head;
//     Node* post =NULL;
//     while(curr != NULL){
//         post = curr->next;
//         curr->next = pre;
//         pre = curr;
//         curr = post;
//     }
//     head = pre;
// }


//double linked list
#include <iostream>
using namespace std;
class Node{
    public:
    Node* pre;
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->pre = NULL;
        this->data = d;
        this->next = NULL;
    }
};
// display's linked list 
void display(Node* &head){
    Node* print = head;
    while(print != NULL){
        cout<<print->data<<" , ";
        print = print->next;
    }
    cout<<endl;
}
// return's the length of linked list
int  length(Node* &head){
    Node* count = head;
    int cnt = 0;
    while(count != NULL){
        
        count = count->next;
        cnt++;
    }
    return cnt;
}

// insert at head 
void insertathead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->pre = temp;
    head = temp;
}
// insert at tail
void insertattail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next=temp;
    temp->pre=tail;
    tail = temp;
    
}
void insertatposition(Node* &head, Node* &tail , int pos , int data){
    //insert at head 
    if(pos == 1){
        insertathead(head,data);
    return;
    }
    // count location
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }
    //insert at last
    if(temp-> next == NULL){
        insertattail(tail,data);
        return;
    }
    Node* pnode = new Node(data);
    pnode->next = temp->next;
    temp->next->pre =pnode;
    temp->next = pnode;
    pnode->pre = temp;
    
    
}

// delete node
void Delete(Node* &head, Node* &tail,int pos){
    if(pos == 1){
    Node* temp = head;
    head = temp->next;
    temp->next->pre = NULL;
    temp->next = NULL;
    delete temp;
    }else{
        Node* p = NULL;
        Node* curr = head;
        int cnt =1;
        while(cnt <pos ){
            p = curr;
            curr = curr->next;
            cnt++;
        }
        p->next = curr->next;
        curr->next->pre = p;
        curr->next = NULL;
        curr->pre = NULL;
        delete curr;
    }
}

int main() {
   Node* newnode = new Node(10);
   Node* head = newnode;
   Node* tail = newnode;
   display(head);
   cout<<"length of linked list is "<<length(head)<<endl;
   insertathead(head,5);
   cout<<"after insert 5 at head the list is : "<<endl;
 display(head);
 insertattail(tail,15);
 cout<<"after insert 15 at tail the list is : "<<endl;
 display(head);
 cout<<"after add 12 to 3 location in doubly linked list the list is :"<<endl;
 insertatposition(head,tail,3,12);
 display(head);
 Delete(head, tail, 3);
 display(head);
    return 0;
}
// output is :
// 10 , 
// length of linked list is 1
// after insert 5 at head the list is : 
// 5 , 10 , 
// after insert 15 at tail the list is : 
// 5 , 10 , 15 , 
// after add 12 to 3 location in doubly linked list the list is :
// 5 , 10 , 12 , 15 , 
// 5 , 10 , 15 , 







//circular linked list
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    //counstructor
    node(int val){
        this->data= val;
        this->next = NULL;
    }
};
void insertathead(node* &head, int data){
    node* newnode = new node(data);
    if(head == NULL){
    newnode->next = newnode;
    head = newnode;
    return;    
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    head = newnode;
}
void display(node* &head){
    node* print = head;
    do{
        cout<<print->data<<" , ";
        print = print->next;
    }while(print->next != head);
        cout<<endl;
}
void insertattail(node* &head, int data){
    if(head == NULL){
        insertathead(head,data);
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp= temp->next;
    }
    
    node* node1 = new node(data);
    temp->next = node1;
    node1->next = head;
}
void deleteathead(node* &head){
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    node* del = NULL;
    del = temp->next;
    temp->next = head->next;
    head = head->next;
    delete del;
}
void Delete(node* &head,int pos){
    if(pos == 1){
        deleteathead(head);
    return;
    }
    int cnt = 1;
    node* point = head;
    while(cnt < pos-1){
        point=point->next;
    cnt++;
    }
    node* del = NULL;
    del = point->next;
    point->next = point->next->next;
    delete del;
}
int main() {
    node* head = NULL;
    insertathead(head,10);
    insertattail(head,11);
    insertathead(head,9);
    insertattail(head,12);
    insertathead(head,8);
    insertattail(head,13);
    display(head);
    cout<<"after delete 3rd "<<endl;
    Delete(head,3);
    display(head);
     cout<<"after delete 1st "<<endl;
    Delete(head,1);
    display(head);
    return 0;
}
// output is :
// 8 , 9 , 10 , 11 , 12 , 
// after delete 3rd 
// 8 , 9 , 11 , 12 , 
// after delete 1st 
// 9 , 11 , 12 , 
