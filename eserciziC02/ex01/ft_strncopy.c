#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ((src[i] != '\0') && (i < n ))
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] != '\0';
        return (dest);
    }
}
// int		main(void)
//{
//	char src[] = "Source string.";
//	char dest[] = "Destination string.";
//	unsigned int n;

//	n = 6;

//	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

  //  ft_strncpy(dest, src, n);

	//printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	//return (0);
//}