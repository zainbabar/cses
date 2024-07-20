#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
  string s;
  cin>>s;
  int ans=0;
  int mlen=0;
  for(int i=0;i<s.length()-1;i++){
    if(s[i]==s[i+1]){
      mlen++;
    }
    else{
      mlen=0;
    }
    ans=max(mlen, ans);
  }
  cout<<ans+1<<endl;
}

