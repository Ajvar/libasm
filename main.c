#include "./includes/libasm.h"
#include <stddef.h>
#include <stdio.h>
# include <unistd.h>
#include <string.h>

ssize_t ft_write(int fd, const void *buf, size_t count);
int     ft_strcmp(const char *s1, const char *s2);
//size_t ft_strlen(const char *s);
int main(void)
{
	int n = ft_strcmp("hello", "hello");
	int z = strcmp("hello", "hello");
	printf("Mine: %d \n Real: %d",n, z);
}

