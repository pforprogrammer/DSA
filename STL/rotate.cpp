//program to rotate elements of array by position
#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &v , int k){
    vector<int> temp(v.size());    // use temp because v overwrite itself their values
    for(int i=0; i<v.size(); i++){
        temp[(i+k)%v.size()] = v[i];  // formula to help rotate last value to front
    }
    v = temp;
    
}
int main() {
    vector<int> v = {11,2,33,4};
    rotate(v,2);
    for(int i:v){
        cout<<i<<" , ";
    }
    return 0;
}
// output:
// 33 , 4 , 11 , 2 , 
