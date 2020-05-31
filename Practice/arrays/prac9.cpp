#include<bits/stdc++.h>
using namespace std;
int main(){

int n,x;
cin>>n>>x;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int curr=arr[0],s=0;
for(int i=1;i<n;i++){
while(curr>x && s<i-1){
curr=curr-arr[s];
s++;

}
if(curr==x){
cout<<s<<i-1;
}
if(i<n){
curr=curr+arr[i];
}
}
return 0;
}
