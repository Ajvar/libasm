#include "./includes/libasm.h"
#include <stddef.h>
#include <stdio.h>
# include <unistd.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
# include <errno.h>

int main(void)
{
	char read_buff[81];
	int fd;
	int return_value;
	char dest[10];

	fd = open("test.txt", O_RDONLY);
	printf("----- FT_STRLEN -----\n");
	printf("REAL || YOURS\n");
	printf("%lu || %zu\n", strlen(""), ft_strlen(""));
	printf("%lu || %zu\n", strlen("lol"), ft_strlen("lol"));

	printf("----- FT_WRITE -----\n");
	printf("REAL:\n");
	printf("\nReturn :%zd\n-----", write(1, "", 0));
	printf("\n");
	printf("YOURS:\n");
	printf("\nReturn :%zd\n-----", ft_write(1, "", 0));
	printf("\n");
	printf("REAL:\n");
	printf("\nReturn :%zd\n-----", write(1, "saucisse", 8));
	printf("\n");
	printf("YOURS:\n");
	printf("\nReturn :%zd\n-----", ft_write(1, "saucisse", 8));
	printf("\n");
	errno = 0;
	printf("ERRNO\n");
	write(3, "lol", 3);
	printf("REAL: %d\n", errno);
	errno = 0;
	ft_write(3, "lol", 3);
	printf("YOURS: %d\n", errno);

	printf("----- FT_READ -----\n");
	bzero(read_buff,81);
	read(fd, read_buff, 81);
	printf("REAL: \n%s", read_buff);
	printf("\n\n");
	lseek(fd, 0L, SEEK_SET);
	ft_read(fd, read_buff, 81);
	printf("YOURS: \n%s", read_buff);
	printf("\n");
	errno = 0;
	read(123465, read_buff, 3);
	printf("REAL: %d\n", errno);
	errno = 0;
	ft_read(123465, read_buff, 3);
	printf("YOURS: %d\n", errno);
	errno = 0;
	close(fd);
	printf("----- FT_STRCPY -----\n");
	bzero(dest, 50),
	strcpy(dest, "test");
	printf("REAL:\n%s \n------\n", dest);
	bzero(dest, 50),
	ft_strcpy(dest, "test");
	printf("YOURS:\n%s \n------\n", dest);
	bzero(dest, 50),
	strcpy(dest, "");
	printf("REAL:\n%s \n------\n", dest);
	bzero(dest, 50),
	ft_strcpy(dest, "");
	printf("YOURS:\n%s \n------\n", dest);

	printf("----- FT_STRDUP -----\n");
	printf("\nREAL:\n%s\nYOURS:\n%s\nREAL:\n%s\nYOURS:\n%s\n", strdup("lol"), ft_strdup("lol"), strdup(""), ft_strdup(""));
	printf("----- FT_STRCMP -----\n");
	printf("REAL:\n%d\nYOURS:\n%d\n REAL:\n%d\nYOURS:\n%d\nREAL:\n%d\nYOURS:\n%d",strcmp("lol", "lol"),ft_strcmp("lol", "lol"), strcmp("", ""), ft_strcmp("", ""), strcmp("b", "a"), ft_strcmp("b", "a") );
}