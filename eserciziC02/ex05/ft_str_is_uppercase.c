//#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    char i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'A' || str[i] > 'Z')
            return(0);
        i++;
    }
    return(1);
}
/* int		main(void)
{
	char alpha[] = "DLKGNDIJSLNSDIDSLVSIOFSLSDOIHSVSJVSDKJNSKBF";
	char *p_alp;
	p_alp = alpha;

	char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only alphabetical chars\n0 = String doesn't contain only alphabetical chars\n\n");
    printf("%s = %d\n", alpha, ft_str_is_uppercase(p_alp));
	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_uppercase(p_emp));

	return (0);
} */