#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
    for (int i = -100; i < 500; i++)
    {
        if (isprint(i) != isprint(i))
        {    
            printf("error: %d \n", i);
        }
    }
}