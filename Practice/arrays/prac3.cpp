#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int x;
for(int i=0;i<n;i++){
int a=arr[i]%n;
arr[a]+=n;
}
for(int i=0;i<n;i++){
if ((arr[i]/n) > 1)
cout << i << " "; 
}

return 0;
}
