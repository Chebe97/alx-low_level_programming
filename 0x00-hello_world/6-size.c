#include <stdio.h>
int main()
{
   char charType;
   int intType;
   long int longintType;
   long long int longlongintType;
   float floatType;

   /*size of evaluates the size of a variable*/
   printf("Size of a char: %zu bytes\n", sizeof (charType));
   printf("Size of an int: %zu bytes\n", sizeof (intType));
   printf("Size of a long int: %zu bytes\n", sizeof (longintType));
   printf("Size of a long long int: %zu bytes\n", sizeof (longlonglongintType));
   printf("Size of a float: %zu bytes\n", sizeof (floatType));

   return 0;
}
