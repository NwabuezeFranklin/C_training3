#include<stdio.h>
//No days off
struct dog{
    char* name;
    float age;
    char* owner;
};

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n The name of my owner is %s", my_dog.name, my_dog.age, my_dog.owner);
    return (0);
}