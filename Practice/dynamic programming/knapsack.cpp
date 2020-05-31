#include<bits/stdc++.h>
using namespace std;
int knapsack(int *wt,int *val,int W,int n){
int dp[n+1][W+1];
for(int i=0;i<=n;i++){
for(int j=0;j<=W;j++){
if(i==0 || j==0){
dp[i][j]=0;
}
else if(j<wt[i]){
dp[i][j]=dp[i-1][j];
}
else{
dp[i][j]=max(val[i]+dp[i-1][j-wt[i]],dp[i-1][j]);
}
}
}
return dp[n][W];
}
int main(){
int cap,items;
cin>>cap;
cin>>items;
int *wt=new int[items];
int *val=new int[items];
for(int i=0;i<items;i++){
cin>>wt[i]>>val[i];
}
int final_val=knapsack(wt,val,cap,items);
cout<<final_val<<"\n";
return 0;
}

