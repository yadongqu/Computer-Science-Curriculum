#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char str[30] = "2030300";
   char *ptr;
   long ret;

   int x = 123;
   int *test = &x;

   ret = strtol(str, &ptr, 10);
   printf("The number(unsigned long integer) is %ld\n", ret);
   printf("String part is |%s|", ptr);
   if(strcmp(ptr, "") == 0){
       printf("Yoo are right!!\n");
   }

   printf("%d\n", test);

   return(0);
}