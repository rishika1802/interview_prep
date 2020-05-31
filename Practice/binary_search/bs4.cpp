#include<bits/stdc++.h>
using namespace std;
void res(int n,int low,int high,int *arr,int x){
while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==x){
cout<<arr[mid];
return ;
}
else if(arr[mid]>x)
high=mid-1;
else
low=mid+1;
}
if(abs(arr[high]-x)<abs(arr[low]-x)){
cout<<arr[high];
}
else
cout<<arr[low];
}
int main(){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int x;
cin>>x;
res(n,0,n-1,arr,x);
return 0;
}
