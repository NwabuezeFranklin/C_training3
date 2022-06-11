#include<stdio.h>
#include<stdlib.h>
//Computerphile :)
struct first
{
    char *name;
    char *nom;
}THING;

struct first *func(char *c, char *d)
{
    struct first *ptr;
    ptr = malloc(sizeof(struct first) * 20);
    ptr -> name = c;
    ptr -> nom = d;
    return ptr;
}

int main()
{
    struct first *name, *nom;
    THING.name = "Franklin";
    printf("%s ", THING.name);
    //func("them","we");
    //printf("%s %s",func);
    name = func("loves","k");
    nom = func("donot","tebby");
    printf("%s %s\n ", name->name, nom->nom );
    THING.nom = "An illusion";
    printf("%s", THING.nom);
      
}