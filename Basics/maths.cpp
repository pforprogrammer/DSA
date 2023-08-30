//program to check wheather the number is prime or not
#include <iostream>
using namespace std;
bool is_prime(int n){
    for(int i=2; i<n; i++){
        if(n%2 == 0){
            return false;
        }
    }
    return true;
}
int main() {
    int n;
  cout<<"enter number to check weather is is prime of not "<<endl;
  cin>>n;
  if(is_prime(n)){
      cout<<"prime number "<<endl;
  }else{
      cout<<"not prime "<<endl;
  }
    return 0;
}
// output:
// enter number to check weather is is prime of not 
// 5
// prime number 



// sieve of Eratosthenes

#include <iostream>
#include <vector>
using namespace std;
int is_prime(int n){
  int cnt = 0;
  vector<bool> prime(n+1,true);
  prime[0] = prime[1] = false;
  for(int i=2; i<n; i++){
      if(prime[i]){
          cnt++;
          for(int j=2*i ;j<n ;j=j+i){
              prime[j] = 0;
          }
      }
  }
  return cnt;
}
int main() {
    int n;
  cout<<"enter number "<<endl;
  cin>>n;
  
      cout<<"there are "<<is_prime(n)<<" prime number "<<endl;
  
    return 0;
}
// output:
// enter number 
// 10
// there are 4 prime number 


// // gcd

#include <iostream>
#include <vector>
using namespace std;

int gcd(int a , int b){
    if(a==0){
        return a;
    }
    if(b==0){
        return b;
    }
    while(a != b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main() {
    int f , s;
  cout<<"enter two number to check gcd "<<endl;
  cin>>f>>s;
  int ans = gcd(f,s);
      cout<<"answer is "<<ans;
  
    return 0;
}
// // ouput:
// // enter two number to check gcd 
// // 72
// // 24
// // answer is 27
