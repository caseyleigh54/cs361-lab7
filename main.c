#include <stdio.h>


int sum(int a , int b){
  return (a+b);
}

int main()
{
   // printf() displays the string inside quotation
   char *myName = "Casey";
   char *yourName = "User";

   printf("Hello, World!\n");

   printf("My name is: %s", myName);
   printf("Your name is: %s", yourName);


   int x = 1;
   int y = 10;


   printf("Sum of %d and %d is: %d\n", x, y, sum(x, y));

   return 0;
}

