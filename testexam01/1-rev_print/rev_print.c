#include <unistd.h>
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char *ft_revprint(char *str)
{
	int i;
	i = 0;
	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}
int main()
{
	char str[] = "";
	ft_revprint(str);
	return (0);
}
