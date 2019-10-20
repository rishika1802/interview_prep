#include <iostream>
using namespace std;
void permute(string str,int l,int r){
    if(l==r){
        cout<<str<<" ";
    }
    else{
        for(int i=l;i<=r;i++){
            swap(str[l],str[i]);
            permute(str,l+1,r);
             swap(str[l],str[i]);
        }
    }
}

void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}
int main() {
    int l=0,r;
	string str="abc";
	r=str.length()-1;
	permute(str,l,r);
	return 0;
}