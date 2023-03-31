#include <stdio.h>

typedef struct {
    char position[32];
    char gender[10];

}staff;

int main()
{
    staff Rose = {"Accountant", "Female"};
    staff John = {"Customer service reprentative", "Male"};
    staff Biodun = {"Telemarketer", "Female"};

    printf("        STAFF       \|      POSITION                        \|      GENDER      \n");
    printf("        Rose        \|      %s                      \|      %s\n", Rose.position, Rose.gender);
    printf("        John        \|      %s   \|      %s\n", John.position, Rose.gender);
    printf("        Biodun      \|      %s                    \|      %s\n", Biodun.position, Rose.gender);

    return (0);
}