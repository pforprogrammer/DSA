
#include<iostream>
#include<vector>
using namespace std;

void spiral(int arr[][4]){
int row = 4;
int col = 4;
int ans;
//indexes
int firstrow = 0; 
int firstcol = 0; 
int lastrow = row-1;
int lastcol = col-1;
int count =0;  int total = row*col;
while(count < total){
//print first row
for(int index = firstcol; count < total && index<=lastcol; index++){
	cout<<arr[firstrow][index]<<" , ";
	count++;
}firstrow++;

//print lastcol
for(int index = firstrow; count < total && index<=lastrow; index++){
	cout<<arr[index][lastcol]<<" , ";
	count++;
}lastcol--;
//lastrow print
for(int index = lastcol; count < total && index>=firstcol; index--){
cout<<arr[lastrow][index]<<" , ";
count++;
}lastrow--;

//firstcol print 
for(int index = lastrow; count < total && index>=firstrow; index--){
cout<<arr[index][firstcol]<<" , ";
count++;
}firstcol++;
}
}
int main(){
int arr[][4] = {{1,2,3,4},{5,6,7,8},{11,22,33,44},{55,66,77,8}};
for(int i=0; i<4; i++){
    cout<<endl;
    for(int j=0; j<4; j++){
        cout<<arr[i][j]<<" \t";
    }
}cout<<endl<<"spiral is :"<<endl;
spiral(arr);
return 0;
}

// output is : 
// 1 	2 	3 	4 	
// 5 	6 	7 	8 	
// 11 	22 	33 	44 	
// 55 	66 	77 	8 	
// spiral is :
// 1 , 2 , 3 , 4 , 8 , 44 , 8 , 77 , 66 , 55 , 11 , 5 , 6 , 7 , 33 , 22 , 
