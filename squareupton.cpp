#include<bits/stdc++.h>
using namespace std;
int square(int n){
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]*a[i]<<endl;
    }
}
int main(){
    int x;
    cin>>x;
    square(x);
}