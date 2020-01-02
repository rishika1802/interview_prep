#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}
int partition(int arr[],int l,int r){
    int j=l,i,pivot;
    i=l-1;
    pivot=arr[r];
    for(j=l;j<=r-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    
    }
    swap(arr[i+1],arr[r]);
    return (i+1);
    
}

void quicksort(int arr[],int l,int r){
    int pi;
    if(l<=r){
        pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
        
    }
}
int main(){
    int arr[6]={4,3,10,9,2,1};
   int l=0,r=5;
    quicksort(arr,l,r);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}