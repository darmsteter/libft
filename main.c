#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> 

int main()
{
    char dst[] = "1";
    char src[] = "test source";
    ft_strlcpy(dst, src, 11);
    printf("%s", dst);
}