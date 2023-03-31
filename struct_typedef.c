#include <stdio.h>
#include <string.h>

typedef struct{
    char make[20];
    int model;
}car;

int main()
{
    car mycar = {"BMW", 2019};
     car blessingscar = {"Mercedez Benz", 2020};

    printf("I own a %s of %d model.",mycar.make, mycar.model);
    // printf(""); MORE CODE GOES IN HERE LATER 
    return (0);
}