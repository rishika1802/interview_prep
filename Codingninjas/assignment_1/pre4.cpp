#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
        int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0,group=0,remain=0;
    for(int i=0;i<n/2;i++){
        sum=arr[i]+arr[n-i-1];
        group=sum/10;
        remain=sum%10;
        cout<<group<<" "<<remain<<"\n";
    }
    
	return 0;
}
