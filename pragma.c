#pragma pack(1)

#include<stdio.h>

//No days off
//Structure packaging
struct test {
    char c[50];
    int g;
    int f;
    float t;

} tester;
// Without the Pragma the sizeof the variable is above the normal count;
// Normal 62 bytes
// without pragma its 64 bytes 

int main()
{
    printf("%d", sizeof(tester));
}