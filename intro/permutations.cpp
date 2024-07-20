#include <atomic>
#include <iostream>

using namespace std;


int main(){
  int n;
  cin>>n;
  int p;
  int nums[n];
  if(n<5){
    return 0;
  }
  for(int i=0;i<n;i++){
    nums[i]=i+1;
  }

  return 0;
}
