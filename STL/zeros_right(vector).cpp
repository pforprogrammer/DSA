//program to move all zeros to right
#include <iostream>
#include <vector>
using namespace std;
void zeros(vector<int> &v){
    int nz =0;
    for(int i=0; i<v.size(); i++){
        if(v[i] != 0){
            swap(v[i],v[nz]);
            nz++;
        }
    }
}
int main() {
   vector<int> v = {0,1,2,3 , 0, 0, 0 , 4};
   zeros(v);
   for(int i:v){
       cout<<i <<" , ";
   }
    return 0;
}
