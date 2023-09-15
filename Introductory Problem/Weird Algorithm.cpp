#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    if(n==1){
    cout<<1<<" ";
    return 0;
    }
  //  cout<<n<<" ";
    while(n >= 1){
        cout<<n<<" ";
        if(n%2==0){
            n/=2;
            if(n == 1) break;
        }
        else{
          //  cout<<n<<" ";
            n = (3*n) +1;
           
            if(n==1) break;
        }
    }
    cout<<n<<endl;
}
