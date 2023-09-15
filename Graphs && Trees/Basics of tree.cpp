//creates nodes of tree and travers in pre , in & post order
#include <iostream>
using namespace std;
    class node{
        public:
        int data;
        node* left;
        node* right;
        node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
    };
    void preorder(node* root){
        
        if(root == NULL){
            return;
        }
        cout<<root->data<<" , ";
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(node* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" , ";
        inorder(root->right);
    }
    void postorder(node* root){
        if(root == NULL){
            return;
        }
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" , ";    
        
    }
int main() {
     node*  root = new node(1);
    root->left =    new node(2);
    root->right = new node(3);
    root->left->left =    new node(4);
    root->left->right =    new node(5);
    root->right->left = new node(9);
    root->right->right = new node(10);
    cout<<"preorder of Tree is :"<<endl;
    preorder(root);
    cout<<endl<<"inorder of Tree is :"<<endl;
    inorder(root);
    cout<<endl<<"postorder of Tree is :"<<endl;
    postorder(root);
    return 0;
}
// output is :
// preorder of Tree is :
// 1 , 2 , 4 , 5 , 3 , 9 , 10 , 
// inorder of Tree is :
// 4 , 2 , 5 , 1 , 9 , 3 , 10 , 
// postorder of Tree is :
// 4 , 5 , 2 , 9 , 10 , 3 , 1 , 





//Insertion all nodes of tree
#include <iostream>
using namespace std;
    class node{
        public:
        int data;
        node* left;
        node* right;
        node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
    };
    node* insertion(node* root){
        int data;
        cout<<"Enter data :"<<endl;
        cin>>data;
        root = new node(data);
        if(data == -1){
            return NULL;
        }
        cout<<"Enter data to the left side of node # "<<data<<endl;
        root->left = insertion(root->left);
        cout<<"Enter data to the right side of node # "<<data<<endl;
        root->right = insertion(root->right);
        return root;
    }
int main() {
     node*  root = NULL;
    root = insertion(root);
        return 0;
}
    //         1
    //     2       3
    //  4   5    6   7
