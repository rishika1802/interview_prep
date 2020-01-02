#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n,int target){
int start=0,end=0;
int sum=0;
for(int i=0;i<n;i++){
if(sum<target){
end++;
sum+=arr[end];
}
else if(sum>target){
sum-=arr[start];
start++;
}
else{
cout<<"true"<<\n;
for(int i=start;i<=end;i++){
cout<<"i"<<" ";
}
return;
}
}
cout<<"false";
}
int main(){
int n,target;
cin>>n>>target;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
solve(arr,n,target);
return 0;
}
