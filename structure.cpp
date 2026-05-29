#include <bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    int m1;
    int m2;
};

int main(){
    struct student s[5];
    for(int i=0;i<5;i++){
        getline(cin,s[i].name);
        cin>>s[i].m1;
        cin>>s[i].m2;
    }
}