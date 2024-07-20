#include <bits/stdc++.h>
using namespace std;
int main(){
  set<int> x;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int y;
    cin>>y;
    x.insert(y);
  }
  cout<<x.size()<<endl;
  return 0;
}
