#include <stdio.h>
int main()
{
  char str[50],str1[50];
  int i,count;
  gets(str);
  gets(str1);
  for(i=0;str[i]!='\0'||str1[i]!='\0';i++)
  {
      if(str[i]!=str1[i])
      count++;
  }
  if(count==0)
  printf("the string is equal");
  else
  printf("the string is not equal");
  return 0;
}
