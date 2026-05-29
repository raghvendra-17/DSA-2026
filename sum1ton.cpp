#include <bits/stdc++.h>
using namespace std;
// sum paramaterised 1 to n
void sum1(int n, int sum)
{
    if (n == 0)
    {
        cout << sum;
        return;
    }
    sum1(n - 1, sum + n);
}
//sum 1 to n return type

int sum2(int n)
{
    if (n == 1)
    return 1;
    return n+sum2(n - 1);
}
//factorial using recursion
int fact(int n){
    if(n==1 or n==0)
    return 1;
    return fact(n-1)*n;

}
// a raised to pow b
int pow(int a, int b){
    if(b==0)
    return 1;
    return a*pow(a,b-1);
}
//febonacci series
int feb(int n){
    if(n==0 or n==1 or n==2)
    return 1;
    return feb(n-1)+feb(n-2);
}
// logarathmic exponential call
int power(int a,int b){
    if(b==1)
    return a;
    if(b%2==0)
    return power(a,b/2)*power(a,b/2);
    else 
    return a*power(a,b/2)*power(a,b/2);  
}
int main()
{
    cout<<power(2,5)<<"\n";
    cout<<pow(2,5);
} 