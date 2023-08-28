#include <iostream>
using namespace std;
bool b_search(int arr[][5], int nrow, int ncol, int target){
  int  row = nrow-1;
  int  col = ncol -1;
  int rowindex = 0;
  int colindex = col;
  
  while(rowindex < row && colindex>=0){
      int element = arr[rowindex][colindex];
      if(element == target ){
          return 1;
      }
      if(element < target ){
          rowindex++;
      }else{
          colindex--;
      }
  }
  return 0;
    
}
int main() {
    int arr[5][5] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    if(b_search(arr,5,5,7)){
        cout<<"found "<<endl;
    }else{
        cout<<"not found "<<endl;
    }
    return 0;
}
// output:
// found
