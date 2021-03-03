#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
void Solve(vector<int> nums,int n);

int main(){
    
 // added the two lines below for faster input
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
    
 //taking total testcases
 int t=1;
 //cin>>t;
  while(t--){
  
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }

    Solve(nums,n);

  }  
	return 0;
}

void Solve(vector<int> nums,int n){

  int count=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      int sum=nums[i]+nums[j];
      //cout<<sum<<'\n';
      if(sum%2 == 0){
        int c1=0;
        for(int k=0;k<32;k++){
          if( (sum>>k) & 1){
            c1++;
          }
        }
        //cout<<c1<<" ";
        if(c1==1){
          count++;
        }
      }
    }
  }

  cout<<count<<'\n';
  return ;
}