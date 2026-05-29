#include<bits/stdc++.h>
using namespace std;
int max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i+1]>max){
            max=arr[i+1];
        }
    }
    cout<<max;
}
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    max(a,5);
}