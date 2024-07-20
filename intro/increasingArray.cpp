#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long>
#define ll long long
int main(){
  ll ans=0;
  ll n;
  cin>>n;
  vi x(n);
  for(ll i=0;i<n;i++){
    cin>>x[i];
  }
  int diff;
  for(ll i=0;i<n-1;i++){
    if(x[i+1]<x[i]){
      diff=x[i]-x[i+1];
      ans+=diff;
      x[i+1]+=diff;
    }
  }
  cout<<ans<<endl;
  return 0;
  // we calc the diff between two nums
  // thats amt of moves we need to even
  // add that to ans
  // change x[i+1] by that amt of moves
  // rinse and repeat
}

