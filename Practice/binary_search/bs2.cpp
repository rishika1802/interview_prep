#include<bits/stdc++.h>
using namespace std;
int fo(int high,int low,int *arr,int x){
while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==x && (arr[mid-1]<x || mid==0)){
return mid;
}
else if(x>arr[mid]){
low=mid+1;
}
else{
high=mid-1;
}
}
return -1;
}
int lo(int high,int low,int *arr,int x){
while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==x && (arr[mid+1]>x || mid==high)){
return mid;
}
else if(x>=arr[mid]){
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
int x;
cin>>x;
int first=fo(n-1,0,arr,x);
int last=lo(n-1,0,arr,x);
cout<<first<<last;
return 0;

}
