#include <iostream>
using namespace std;
void merge(int arr[],int s,int mid,int e){
    int n1=mid-s+1; int n2=e-mid;
    int a[n1]; int b[n2];
    for(int i=0; i<n1; i++){
        a[i]=arr[s+i];
    }
    for(int i=0; i<n2; i++){
        b[i]=arr[mid+1+i];
    }
    int i=0; int j=0; int k=s;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }else{
            arr[k]=b[j];
            k++; j++;
        }
    }
    while(i<n1){
         arr[k]=a[i];
            k++;i++;
    }
    while(j<n2){
         arr[k]=b[j];
            k++; j++;
    }
}
void merge_sort(int arr[],int s, int e){
    if(s<e){
        int mid=s+(e-s)/2;
        merge_sort(arr,s,mid);
        merge_sort(arr,mid+1,e);
        merge(arr,s,mid,e);
    }
}
int main() {
    int arr[9]={11,2,44,5,66,7,8,9,1};
    merge_sort(arr,0,8);
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
