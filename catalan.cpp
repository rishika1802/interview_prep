# include<bits/stdc++.h> 
using namespace std; 


int bino(int n,int k){
    if(k>n-k)
    k=n-k;
    int res=1;
    for(int i=0;i<k;++i){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
int catalan(int n){
    int r=bino(2*n,n);
    return r/n+1;
}





int main(){
  
    for (int i = 0; i < 10; i++) 
        cout << catalan(i) << " "; 
    
    return 0;
}
