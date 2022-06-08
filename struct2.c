#include<stdio.h>
// No days off 
struct student {
    int age;
    char* name;
    float score;
}s1 ;

void print(int age, char* name, float score)
{
    printf("%d %s %.2f\n", age, name, score);

}
int main ()
{
    struct  student s1 = {13, "Alexander",67.9};
    printf("%d %s %.2f\n", s1.age, s1.name, s1.score);
    printf("%d\n", sizeof( struct student));
    print(s1.age, s1.name, s1.score);
    printf("%d\n %d\n",&s1.name, &s1.name+1);
    printf("%c\n %c",*(&s1.name), *(&s1.name+1));

    return 0;
}