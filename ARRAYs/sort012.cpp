//program to sort 0,1,2 with the help of three pointer's

#include <iostream>

using namespace std;
void sort(int arr[],int n){
    int lo = 0; int mid =0; int hi = n-1;
    while(mid<=hi){
        
        
        
        switch(arr[mid]){
            
            case 0:
            swap(arr[mid++],arr[lo++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(arr[mid],arr[hi--]);
            break;
            
        }
    }
}

int main()
{
    int arr[5] = {2,2,1,0,0};
    sort(arr,5);
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" , ";
    }

    return 0;
}
// output is :
// 0,0,1,2,2,
