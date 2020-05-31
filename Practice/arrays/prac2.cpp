#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int low=0,high=n-1;
while(low<high){
if(arr[low]==0){
low++;
}
if(arr[high]==1){
high--;
}
if(arr[low]==1 && arr[high]==0){
swap(arr[low],arr[high]);
low++;
high--;
}
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}
