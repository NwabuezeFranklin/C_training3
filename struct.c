#include<stdio.h>
//No days off
struct car
{
    int wheels;
} num;
int main()
{
    struct car;
    num.wheels = 34;
    printf("%d", num.wheels);
    return 0;
}
