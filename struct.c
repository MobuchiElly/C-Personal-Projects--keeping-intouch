#include <stdio.h>
 struct phone{
        char make[6];
        char model[5];
        int yearmanufactured;

 };
int main()
{
       struct phone mine = {"redmi", "note9", 2021};
       printf("My phone\'s model is %s %s.\nIt was manufactured in %d",mine.make, mine.model, mine.yearmanufactured);
      return(0);
}