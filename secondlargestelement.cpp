#include<bits/stdc++.h>
using namespace std;
void smax(int arr[],int n){
    int max=arr[0],smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i+1]>max){
            max=arr[i+1];
        }
    }
    cout<<max<<endl;
    for(int i=0;i<n;i++){
        if(smax<arr[i] and arr[i]!=max)
        smax=arr[i];
    }
    cout<<smax<<" ";
}
int main(){
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    smax(a,5);
}