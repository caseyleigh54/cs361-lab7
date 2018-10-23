#include <stdio.h>


int sum(int a , int b){
  return (a+b);
}

int main()
{
   // printf() displays the string inside quotation
   char *yourName = "Casey";
   char *yourName = "User";

   printf("Hello, World!\n");

   printf("My name is: %s\n", yourName);
   printf("Your name is: %s\n", yourName);


   int x = 1;
   int y = 10;


   printf("Sum of %d and %d is: %d\n", x, y, sum(x, y));

   return 0;
}

