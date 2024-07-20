#include <bits/stdc++.h>
#include <vector>

#define vi vector<int>

using namespace std;

int main(){
  int n;
  cin>>n;
  vi nums(n-1);
  for(int i=0;i<n-1;i++){
    cin>>nums[i];
  }
  sort(nums.begin(), nums.end());

  return 0;
}

// unfinished
