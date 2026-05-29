#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //transpose method 1// method incorrect
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //transpose method j
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}