#include<bits/stdc++.h>
using namespace std;
void product(int arr[],int n){
    int pro=1;
    for (int i=0;i<n;i++){
        pro*=arr[i];
    }
    cout<<pro;
}
int main(){
    int a[5];
    for (int i=0;i<5;i++){
        cin>>a[i];
    }
    product(a,5);
    
}