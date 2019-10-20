#include<bits/stdc++.h>
using namespace std;
int maxrop(int n,int a,int b,int c){
    if(n==0)
    return 0;
    if(n<0)
    return -1;
    int res=max({maxrop(n-a,a,b,c),maxrop(n-b,a,b,c),maxrop(n-c,a,b,c)});
    if(res==-1)
    return -1;
    else
    return res+1;
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<maxrop(n,a,b,c);
    return 0;
}