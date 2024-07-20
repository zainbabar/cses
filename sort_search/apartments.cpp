#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main(){
  int n, m, k;
  int ans=0;
  cin>>n>>m>>k;
  vi a(n);
  vi b(m);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<m;i++){
    cin>>b[i];
  }
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  for(int i=0;i<n;i++){
    if(abs(a[i]-b[i])<=k){
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}
