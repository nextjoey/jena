#include "fonctions.h"

int     my_putstr(char *str)
{
  char  i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
