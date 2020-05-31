#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cin>>n>>x;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n-2;i++){
unordered_set<int> s;
int sum=x-arr[i];
for(int j=i+1;j<n;j++){
if(s.find(sum-arr[j])!=s.end()){
cout<<arr[i]<<arr[j]<<sum-arr[j];
}
else{
s.insert(arr[j]);
}
}
}
return 0;
}
