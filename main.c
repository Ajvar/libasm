#include "./includes/libasm.h"
#include <stddef.h>
#include <stdio.h>
# include <unistd.h>
#include <string.h>
#include <stdlib.h>

ssize_t ft_write(int fd, const void *buf, size_t count);
//char *ft_strcpy(char *dest, char *src);
int     ft_strcmp(const char *s1, const char *s2);
//size_t ft_strlen(const char *s);
int main(void)
{
	char *s = "lol";
    char *ss = malloc(4);
    ss = ft_strcpy(ss,s);
  for (int i = 0; i < 3; i++)
      printf("%c", ss[i]);
  //printf("%s",ss);
}

