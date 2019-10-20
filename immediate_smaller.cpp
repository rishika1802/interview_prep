#include <iostream>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test-->0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]){
                cout<<arr[i+1]<<" ";
            }
            else{
                cout<<-1<<" ";
            }
            
        }
        cout<<-1<<"\n";
    }
	//code
	return 0;
}