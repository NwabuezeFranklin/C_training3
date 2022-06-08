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
void func(struct exe *p)
{
    printf("%d %d %c %.2f %s\n",p-> i,p-> j,p-> c,(*p).f, (*p).n ); // This goes ahead to show that we can make use of "." or '->'
}
int main()
{
    //struct exe *p;
    struct exe me = {1, 2, 'c', 7.8, "done"};
    struct exe you = {3, 4, 'd', 8.8, "unfinished" };
    func(&me);
    func(&you); 

}