#include <stdio.h>
int main()
{
char c;
  while(c=getchar()!=EOF) 
  {
  putchar(c);
  c=getchar();
  printf("\n");
  }
}