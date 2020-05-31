#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
 int i, j,max_d=0; 
for(int i=0;i<n;i++){
for(int j=n-1;j>i;j--){
if(arr[j]>arr[i] && max_d<(j-i)){
max_d=j-i;
}
}
}
    
  
cout<<max_d;

return 0;
}
