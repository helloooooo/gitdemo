#include <stdio.h>

size_t my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   printf("haha");
   char *s[] = {
      "Git tutorials",
      "Tutorials Yiibai"
   };

   for (i = 0; i < 2; ++i)
      printf("string lenght of %s = %d
", s[i], my_strlen(s[i]));

   return 0;
}