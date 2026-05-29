#include<bits/stdc++.h>
using namespace std;
void sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
int main(){
    int a[5],n;
    n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    sum(a,n);
}