#include<stdio.h>
void print(int n){
    if(n==0)
    return;
    printf("\n%d",n);
}

void print2(int n){
    if(n==0)
    return;
    printf("\n%d",n);
    print2(n-1);
    printf("\n%d",n);
    
}
int main(){
    print2(10);
}