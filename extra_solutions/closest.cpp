#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test-->0){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
	    int min=INT_MAX,close=0;
	    for(int i=0;i<n;i++){
	        int u=abs(k-arr[i]);
	        if(u<=min){
	            min=u;
	            close=arr[i];
	        }
	    }
	    cout<<close<<"\n";
	}
	return 0;
}