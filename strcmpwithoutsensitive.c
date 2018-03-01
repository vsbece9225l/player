#include <stdio.h>
#include <string.h>
int main(void)
{                             
   if (0 == strcasecmp("hello", "Hello"))
      printf("The strings are equivalent.\n");
   else
      printf("The strings are not equivalent.\n");
   return 0;
}
