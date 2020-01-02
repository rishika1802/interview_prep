#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,p=0,k=0;
            cin>>n;
    int arr[n];
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            p=i;
           
        }
    }
    
    int min=INT_MAX;
       for(int j=0;j<p;j++){
           if(arr[j]<min){
             min=arr[j];  
           }
       }
    int max1=INT_MIN;
    for(int i=p+1;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max1){
            max1=arr[i];
            k=i;
           
        }
    }
    int min1=INT_MAX;
    for(int j=p+1;j<n;j++){
           if(arr[j]<min1){
             min1=arr[j];  
           }
       }
    int x=max-min;
    int y=max1-min1;
    if(x>y)
        cout<<x;
    else
        cout<<y;
	// Write your code here
}
