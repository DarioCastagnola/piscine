//#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    char i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
            return(0);
        i++;
    }
    return(1);
}
//int		main(void)
//{
//	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//   	char *p_alp;
//	p_alp = alpha;
//
//	char numbers[] = "0123456789";
//	char *p_num;
//	p_num = numbers;
//
//	char empty[] = "";
//	char *p_emp;
//	p_emp = empty;
//
//	printf("-----\n1 = String contains only alphabetical chars\n0 = String doesn't contain only alphabetical chars\n\n");
//  printf("%s = %d\n", alpha, ft_str_is_alpha(p_alp));
//	printf("%s = %d\n", numbers, ft_str_is_alpha(p_num));
//	printf("Empty = %d\n-----\n", ft_str_is_alpha(p_emp));
//
//	return (0);
//}