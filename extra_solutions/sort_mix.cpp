#include<bits/stdc++.h>
using namespace std;
int main(){
int test;
cin>>test;
while(test--){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr,arr+k);
sort(arr+k,arr+n,greater<int>());
for(int i=0;i<n;i++){
cout<<arr[i];
}
}
return 0;
}
