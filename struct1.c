#include <stdio.h>

struct piano{
    char make[20];
    char model[20];
    int numOfKeys;
    int numOfOctaves;
    char countriesPopular[30];
    char type;
};

int main()
{
    struct piano BuchisPiano = {"M\-audio", "keystation", 49, 4, "Nigeria\, USA\, Canada",'B'};

    printf("My piano's model is %s %s.\nIt has %d keys with %d octaves.\nIt can be popularly found in countries like %s.\nI would say it is a type %c piano.",BuchisPiano.make, BuchisPiano.model, BuchisPiano.numOfKeys, BuchisPiano.numOfOctaves, BuchisPiano.countriesPopular, BuchisPiano.type);
    return (0);
}