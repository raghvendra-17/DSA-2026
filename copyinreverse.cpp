#include<bits/stdc++.h>
using namespace std;
void copy(int arr[],int n){
    int brr[n];
    cout<<"ENTER THE ARRAY";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        brr[i]=arr[n-1-i];
        cout<< brr[i]<< " ";
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<< brr[i];
    // }
}
int main(){
    int arr[5];
    copy(arr,5);
}