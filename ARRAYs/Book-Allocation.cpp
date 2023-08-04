
  #include <iostream>
using namespace std;
bool possible(int arr[], int n, int m, int mid){
    int psum=0;
    int student=1;
    for(int i=0; i<n; i++){
        if(psum+arr[i]<=mid){
            psum+=arr[i];
        }else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
            }
            psum=arr[i];
        }
        if(student > m){
            return false;
        }
    }
    return true;
}


int allocation(int arr[],int n, int m){
    int s=0; int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(possible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    int n=4; int student=2;
  int book[n]={10,20,30,40};
  cout<<"the maximum number of pages is assigned to a student is minimum :"<<allocation(book,n,student);
return 0;
}
