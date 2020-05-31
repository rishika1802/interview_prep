#include<bits/stdc++.h>
using namespace std;
int binarysearch(int high,int low,int *arr,int x){
while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==x){
return mid;
}
else if(x<arr[mid]){
low=mid+1;
}
else{
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
int search;
cin>>search;
int res=binarysearch(n-1,0,arr,search);
cout<<res;
}
