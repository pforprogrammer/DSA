//Basics of 2D array............
#include <iostream>
#include <limits.h>
using namespace std;
 bool found(int arr[][3], int target, int i, int j){
     for(int row = 0; row < i; row++){
         for(int col = 0; col<j; col++){
             if(arr[row][col] == target){
                 return 1;
             }
         }
     }
     return 0;
 }
int main() {
    
    int target;
    
    

// take input
int arr[3][3];
    cout<<"enter number's to enter in 2D array "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }cout<<endl;
    
    // //display  arr[][]
    cout<<"display by taking inputs "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"\t";
        }cout<<endl;
    }
    //find element in 2D array by linear search
  cout<<"enter number to find in 2D array :"<<endl;
    cin>>target;
 if(found(arr,target,3,3)){
        cout<<"element is found "<<endl;
    }else{
        cout<<"element is not found "<<endl;
    }
  
    
     //initializeing
     int arr1[3][3] = {1,2,3,4,5,6,7,8,9};           //  equals to  int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    
    // //display
    cout<<"display by initilizing "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr1[i][j]<<"\t";
        }cout<<endl;
    }
    
    
   
    
    //sum of row of 2D array
        int arr1[3][3] = {1,2,3,4,5,6,7,8,9};           
    
    
    cout<<"display sum of rows "<<endl;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr1[i][j];
        }cout<<sum<<endl;
    }
    


  
//take INPUT as COL and SUM of COl 

int col_in[3][3];
for(int col = 0; col<3; col++){
for(int row =0; row<3; row++){
cin>>col_in[row][col];
	}
}    


cout<<"display by Col "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<col_in[i][j]<<"\t";
        }cout<<endl;
    }
cout<<"sum of col.. is "<<endl;
  int max=INT_MIN;
for(int i=0; i<3; i++){
int csum = 0; 
        for(int j=0; j<3; j++){
            csum+=col_in[i][j];
        }
  if(csum>max){
    max=csum;
  }
    }cout<<"sum of largest col.. is "<<max<<endl;    // sum of maximum col 



  

    return 0;
}


