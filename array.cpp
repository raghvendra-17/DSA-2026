#include <bits/stdc++.h>
using namespace std;
//canging value of element of array using function
int change(int arr[]){
    arr[2]=7;
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    change(a);
    for(int i=0;i<5;i++){
        cout<<a[i];
    }
}