#include <bits/stdc++.h>
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
	
	vector<int> g;
	g.push_back(arr[n-1]);
	int j=n-2;
	for(int i=0;i<n-1;i++){
	    
	    if(arr[j]>=g.back()){
	        g.push_back(arr[j]);
	    }
	    j--;
	}
for (auto i = g.rbegin(); i != g.rend(); ++i) 
        cout << *i << " "; 
	cout<<"\n";
	}
	return 0;
}