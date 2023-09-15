// Online C++ compiler to run C++ program online
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
