#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
sum=sum+arr[i];
}
int left=0,right=sum;
for(int i=0;i<n;i++){
left+=arr[i];
right-=arr[i];
if(left==right){
cout<<left<<right;
cout<<i<<" ";
break;
}
}
return 0;
}
