#include <stdio.h>
int main()
{
  char vk;
  scanf("%c", &vk);
  if (vk == 'a' || vk == 'A' || vk == 'e' || vk  == 'E' || vk == 'i' || vk == 'I' || vk =='o' || vk =='O' || vk == 'u' || vk == 'U')
  {
    printf("Vowel");
  }
  else
  {
    printf("Consonant");
  }
  return 0;
}