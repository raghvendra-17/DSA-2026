#include<bits/stdc++.h>
using namespace std;
int min(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i+1]<min){
            min=arr[i+1];
        }
    }
    cout<<min;
}
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    min(a,5);
}