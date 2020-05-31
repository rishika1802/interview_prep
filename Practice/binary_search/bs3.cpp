#include<bits/stdc++.h>
using namespace std;
int rotate(int n,int low,int high,int *arr){
while(low<=high){
int mid=low+(high-low)/2;
if(arr[(mid-1)%n]>arr[mid] && arr[(mid+1)%n]>arr[mid]){
return mid;
}
if(arr[low]<=arr[mid]){
low=mid+1;
}
else if(arr[mid]<arr[high]){
high=mid-1;
}
}
return -1;
}
int main(){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int res=rotate(n,0,n-1,arr);
cout<<res;
return 0;
}
