#include<bits/stdc++.h>
using namespace std;
void copy(int arr[],int n){
    int temp=0;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl<<"\n";
    }
}
int main(){
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    copy(arr,6);
    int i, j=6-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
}
