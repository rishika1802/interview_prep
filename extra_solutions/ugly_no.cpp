# include<bits/stdc++.h> 
using namespace std; 

int ugly(int n){
    int a[n];
    int mul_2=2;
    int mul_3=3;
    int mul_5=5;
    int i2=0,i3=0,i5=0;
    int next_ugly=1;
    a[0]=1;
    for(int i=1;i<n;i++){
    next_ugly=min(mul_2,min(mul_3,mul_5));
    a[i]=next_ugly;
    if(next_ugly==mul_2){
        i2=i2+1;
        mul_2=a[i2]*2;
    }
      if(next_ugly==mul_3){
        i3=i3+1;
        mul_3=a[i3]*3;
    }
      if(next_ugly==mul_5){
        i5=i5+1;
        mul_5=a[i5]*5;
    }
}
return next_ugly;
}




int main(){
    int n,m;
    cin>>n;
    m=ugly(n);
    cout<<m;
    return 0;
}
