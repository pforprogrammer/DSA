// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void insertion(vector<double> &buckets){
    int n = buckets.size(); int j;
    for(int i=1; i<n; i++){
        double key = buckets[i];
        j = i-1;
        while(j>=0 && buckets[j]> key){
            buckets[j+1] = buckets[j];
            j--;
        }
        buckets[j+1] = key;
    }
}
void bucketsort(vector<double> &arr){
    int n = arr.size();
    
    vector<vector<double> > buckets(n);
    for(int i=0; i<n; i++){
        int index = n*arr[i];
        buckets[index].push_back(arr[i]);
    }
    for(int i=0; i<n; i++){
        insertion(buckets[i]);
    }
    int index = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<buckets[i].size(); j++){
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    vector<double> arr = {0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51};
    cout<<"before sorting "<<endl;
    for(double i:arr){
        cout<<i<<" , ";
    }
    
    
    bucketsort(arr);
    cout<<endl;
    cout<<"after sorting "<<endl;
    for(double i:arr){
        cout<<i<<" , ";
    }
    return 0;
}
// output is :
// before sorting 
// 0.42 , 0.32 , 0.33 , 0.52 , 0.37 , 0.47 , 0.51 , 
// after sorting 
// 0.32 , 0.33 , 0.37 , 0.42 , 0.47 , 0.51 , 0.52 , 
