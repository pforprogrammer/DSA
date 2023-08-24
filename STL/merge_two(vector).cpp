//program to merge two sorted array 
#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> a1, int s1, vector<int> a2, int s2, vector<int> a, int s){
    int i=0 , j=0 , k=0;
    while(i<s1 && j<s2){
        if(a1[i] <= a2[j]){
            a[k] = a1[i];
            k++; i++;
        }else{
            a[k] = a2[j];
            k++; j++;
        }
    }
    while(i<s1){
        a[k] = a1[i];
            k++; i++;
    }
    while(j<s2){
        a[k] = a2[j];
            k++; j++;
    }
    return a;
}
void print(vector<int> a, int size){
    cout<<"after merge two array :"<<endl;
    for(int i=0; i<size; i++){
        
        cout<<a[i]<<" , ";
    }
}

int main() {
    
    vector<int> j={1,9,10,14};
    vector<int> v={3,7,8,9};
    int s1 = v.size();
    int s =  v.size() + j.size();
     vector<int> a(v.size() + j.size());
   
    
    cout<<"array # 1"<<endl;
    for(int i: v){
        cout<<i<<" , ";
    }cout<<endl; 
    
    

    
    cout<<"array # 2"<<endl;
    for(int i: j){
        cout<<i<<" , ";
    }cout<<endl; 
    vector<int> m = merge(v, s1, j, s1, a,s);
    print(m,s);
    return 0;
}
// output:
// array # 1
// 3 , 7 , 8 , 9 , 
// array # 2
// 1 , 9 , 10 , 14 , 
// after merge two array :
// 1 , 3 , 7 , 8 , 9 , 9 , 10 , 14 , 
