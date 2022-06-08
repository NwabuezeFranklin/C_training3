#include<stdio.h>
#include<stdlib.h>
//No days off
//Returning a structure variable from a function
struct me{
    int i;
    int j;
};
struct me* p(int a, int b)//function pointer
{
   struct me* pt = malloc(sizeof(struct me));
   pt-> i = a * 4;
   pt-> j = b * 9;
   return pt;
}
int main()
{
    struct me *p1, *p2;
    p1 = p(2,3);
    p2 = p(4,5);
    printf("%d %d",p1->i, p2-> j);
    free(p1);
    free(p2);
}