#include <iostream>
using namespace std;
bool binarysearch(int arr[][3], int nrow, int ncol, int target){
    int s =0;  int e = nrow*ncol -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        int element = arr[mid/ncol][mid%ncol];
        if(element == target){
            return 1;
        }
        if(element >target){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}
int main() {
    int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    if(binarysearch(arr,3,3,9)){
        cout<<"found "<<endl;
    }else{
        cout<<"not found "<<endl;
    }
    return 0;
}
// output:
// found
