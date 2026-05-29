#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    getline(cin, x);
    int count = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == 'a' or x[i] == 'e' or x[i] == 'i' or x[i] == 'o' or x[i] == 'u')
            count++;
    }
    cout << count;
}