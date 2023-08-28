#include <iostream>
using namespace std;
void wave(int arr[][3], int nrow, int ncol){
    for(int col=0; col<ncol; col++){
    // agar to odd howa to move bottom to up
    if(col&1){
        for(int row=nrow-1; row>=0; row--){
            cout<<arr[row][col]<<" , ";      //odd pe nichay say oper move kerna hay
        }
    }else{
        for(int row=0; row<nrow; row++){
            cout<<arr[row][col]<<" , ";         //even pe oper say nichay move kerna hay
        }
    }
    }
}
int main() {
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    //display it
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" , ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"In wave form "<<endl;
    wave(arr,3,3);
    return 0;
}
// output is :
// 1 2 3 
// 4 5 6
// 7 8 9
//   In wave form 
// 1 4 7 8 5 2 3 6 9
