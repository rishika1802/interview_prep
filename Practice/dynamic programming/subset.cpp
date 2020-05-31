#include<bits/stdc++.h>
using namespace std;
int func(int *arr,int n,int num){
int  dp[n+1][num+1];
for (int i = 0; i <= n; i++) 
        dp[i][0] = true; 
  
     
    for (int i = 1; i <= num; i++) 
       dp[0][i] = false;
for(int i=1;i<=n;i++){
for(int j=1;j<=num;j++){

if(j<arr[i-1]){
dp[i][j]=dp[i-1][j];
}
else{
dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
}
}
}
return dp[n][num];
}
int main(){
int num,n;
cin>>num>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int res=func(arr,n,num);
cout<<res<<"\n";
return 0;
}
