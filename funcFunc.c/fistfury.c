#include<stdio.h>
//No days off
//Retribution
void func(int i)
{
    printf("%d", i);
}
int main()
{
    void (*funcPtr)(int r);
    funcPtr =&func; // funcPtr = func
    (*funcPtr)(10); //funcPtr(10)

}
