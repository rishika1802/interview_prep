#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test-->0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	}
	int d;
	cin>>d;
	int a[d];
	int b[n];
	for(int i=0;i<=d-1;i++){
	    a[i]=arr[i];
	    
	}
	 int j=0;
	for(int i=d;i<n;i++){
	    arr[i-d]=arr[i];
	    j++;
	}
	
	for(int i=0;i<=d-1;i++){
	    arr[j]=a[i];
	    j++;
	}
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<"\n";
	}
	return 0;
}