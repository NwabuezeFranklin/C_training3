#include<stdio.h>
//Retribution
struct student
{
    char *name;
    int age;
    float score;
}meso,chiemerie;
struct student *print(char *name, int a, float s)
{
    a = a * 2;
    printf("My name is %s\n I am %d years old\n My score is %.2f\n\n\n", name, a, s);
}


int main()
{
    
    
        struct student meso ={"Mmesoma Ifeh", 13, 89.8};
        struct student chiemerie ={"Chiemerie Ifeh", 14, 45.7};
        print(meso.name,meso.age,meso.score);
        print(chiemerie.name,chiemerie.age,chiemerie.score);
    
   
}