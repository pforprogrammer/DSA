//program to calculate square root of number given by user with the help of binary search
#include <iostream>
using namespace std;
long long int square(int num){
    int s=0; int e=num; long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
    long long int sq = (mid*mid);
        if(sq==num){
            return mid;
        }
        if(sq>num){
            e=mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
    double precession(int num, int tans, int dec ){
        double factor=1;
        double ans=tans;
        for(int i=0; i<dec; i++){
            factor=factor/10;
            for(double j=ans; j*j<num; j=j+factor){
                ans=j;
            }
        }
        return ans;
    }

int main() {
    int num;
    cout<<"Enter a number for square root "<<endl;
    cin>>num;
    int tans=square(num);
    cout<<"answer is "<<precession(num,tans,4);
 
    return 0;
}
