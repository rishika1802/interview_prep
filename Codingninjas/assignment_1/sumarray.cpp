#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
 cin>>n;
 int **arr=new int*[n];

 for(int i=0;i<n;i++){
     arr[i]=new int[n];
     for(int j=0;j<n;j++){
         cin>>arr[i][j];
     }
 }
    int sum=0,k=0,j=0;
    for(j=0;j<n;j++){
        sum+=arr[k][j];
       
    }
     
    k=n-1;
    for(j=0;j<n;j++){
        sum+=arr[k][j];
       
    }
    
     
    j=0;
    for(int i=1;i<n-1;i++){
        sum+=arr[i][j];
        
    }
     
    j=n-1;
    for(int i=1;i<n-1;i++){
        sum+=arr[i][j];
       
    }
     
    for(int i=1;i<n-1;i++){
        for(j=1;j<n-1;j++){
            if(i==j){
                sum+=arr[i][j];
            }
            if(i==n-j-1){
                sum+=arr[i][j];
            }
        }
    }
    if(n%2==1){
     sum-=arr[n/2][n/2];   
    }
    
    
    cout<<sum;
	return 0;
}

