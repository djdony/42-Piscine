#include <stdio.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
//	char str1[] = "   -+42He55llo";
	char src[] = "Hello";
	char dest[] = "";
//	ft_putstr(str1);
//    ft_putnbr(-2147483648);
//    int a = ft_atoi(str1);
//	printf ("%d", a);
//	char a[] = ft_strcpy(dest, src);
	printf("%s", ft_strcpy(dest,src));
	return (0);
}
