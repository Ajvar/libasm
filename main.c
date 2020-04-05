#include "./includes/libasm.h"
#include <stddef.h>
#include <stdio.h>
# include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(void)
{
	t_list structure;
  printf("----- FT_STRLEN -----\n");
  printf("REAL || YOURS\n");
	printf("%lu || %zu\n", strlen(""), ft_strlen(""));
   printf("%lu || %zu\n", strlen("lol"), ft_strlen("lol"));

	printf("----- FT_WRITE -----\n");
	 write(1, "", 0);
	printf("\n");
	ft_write(1, "" ,0);
	printf("\n");
	write(1, "saucisse", 8);
	write(1, "\n", 1);
	ft_write(1, "saucisse", 8);
	char s1[50];
	char s2[50];
	char s3[50];
	char s4[50];
	printf("\n----- FT_STRCPY -----\n");	
	printf("%s\n", strcpy(s1, "lol"));
	printf("%s\n", ft_strcpy(s2, "lol"));
	printf("%s\n", strcpy(s3, ""));
	printf("%s\n", ft_strcpy(s4, ""));
	printf("----- FT_STRDUP -----");
	printf("\n%s\n%s\n%s\n%s\n", strdup("lol"), ft_strdup("lol"), strdup(""), ft_strdup(""));
}

