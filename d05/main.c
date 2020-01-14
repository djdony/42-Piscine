#include <stdio.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

int		main(void)
{
	char str1[] = "   -+42He55llo";

//	ft_putstr(str1);
//    ft_putnbr(-2147483648);
    int a = ft_atoi(str1);
	printf ("%d", a);
}
