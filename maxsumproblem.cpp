#include<bits/stdc++.h>
using namespace std;

int max_sum(int n){
if(n==0 || n==1){
return n;
}
else{
return max(n,(max_sum(n/2)+max_sum(n/3)+max_sum(n/4)));
}
}


int main(){
int test;
cin>>test;
while(test--){
int n;
cin>>n;
int r=max_sum(n);
cout<<r<<"\n";
}
return 0;
}
