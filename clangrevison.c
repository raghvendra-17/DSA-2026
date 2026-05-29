#include <stdio.h>
// functions
void hola()
{
    printf("Hii! What's Your Name\n");
    printf("function train\n");
}
// even odd function
void evenodd(int x)
{
    if (x % 2 == 0)
    {
        printf("even");
        return;
    }
    printf("odd");
    return;
}
// min or max number
void minmax(int x, int y)
{
    if (x > y)
    {
        printf("%d is greater", x);
        return;
    }
    printf("%d is greater", y);
}
// multiple function
void dis(){
    printf("kanpur");
}
void state(){
    printf("UP");
    dis();
}
void india()
{
    state();

}

int main()
{
    // Arrays and Strings
    hola();
    evenodd(0);
    minmax(2, 3);
    india();
}