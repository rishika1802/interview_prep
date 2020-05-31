#include<bits/stdc++.h>
using namespace std;
int main(){
int n,d;
cin>>n>>d;
int k=d%n;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<arr[(i+k)%n]<<" ";
}
return 0;
}
