#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int even_sum=0,odd_sum=0;
    for(int i=0;i<n;i++){
        if((a[i]%2==0) && (i%2==0) ){
            even_sum+=a[i];
        }
         if((a[i]%2!=0) && (i%2!=0) ){
            odd_sum+=a[i];
        }
    }
    cout<<even_sum<<" "<<odd_sum<<endl;
	return 0;
}
