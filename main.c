#include "includes/libasm.h"
#include <stddef.h>
#include <stdio.h>

extern size_t ft_strlen(const char *s);

int main()
{
    size_t n = ft_strlen("");
    printf("%d", (int)n);
}