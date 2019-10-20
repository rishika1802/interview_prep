#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test-->0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int temp=(n-1)/2;
        int a[n];
        a[temp]=arr[0];
        int k=temp,j=temp;
        for(int i=1;i<n;i++){
            if(i%2==1){
                a[++j]=arr[i];
            }
            else{
                a[--k]=arr[i];
            }
        }
         for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
    
}