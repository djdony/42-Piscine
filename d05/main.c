#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char str1[] = "   -42He55llo";
//	char src[] = "Hello World";
//	char dest[] = "Bye";
//	ft_putstr(str1);
//    ft_putnbr(-2147483648);
    printf("%d", ft_atoi(str1));
//	printf ("%d", a);
//	char a[] = ft_strcpy(dest, src);
//	printf("%s", ft_strcpy(dest,src));
//	printf("%s", ft_strncpy(dest, src, 4));
//	printf("\n%s", strncpy(dest, src, 4));
	return (0);
}
