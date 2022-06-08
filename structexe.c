#include<stdio.h>
//No days off
struct exe
{
    int i;
    int j;
    char c;
    float f;
    char* n;
} me, you;
void func(int i, int j, char c, float f, char* n)
{
    printf("%d %d %c %.2f %s\n", i, j, c, f, n );
}
int main()
{
    struct exe me = {1, 2, 'c', 7.8, "done"};
    struct exe you = {3, 4, 'd', 8.8, "unfinished" };
    func(me.i, me.j, me.c, me.f, me.n);
    func(you.i, you.j, you.c, you.f, you.n); 

}