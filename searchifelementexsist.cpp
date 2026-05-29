#include <bits/stdc++.h>
using namespace std;
void search(int arr[], int n)
{
    int x;
    cout << "Enter the Element to be searched : ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            cout << "element Found at "<<i;
            return;
        }
    }
    cout<<"Element Not Found";
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    search(a, 5);
}