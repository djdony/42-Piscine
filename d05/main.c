#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char *ft_strstr(char *str, char *to_find);

int		main(void)
{
//	char str1[] = " ";
	char src[] = "Hello World Tommorow";
//	char dest[] = "Bye";
	char a[] = "Wol";
//	ft_putstr(str1);
//    ft_putnbr(-2147483648);
//    printf("%d", ft_atoi(str1));
//	printf ("%d", a);
//	char a[] = ft_strcpy(dest, src);
//	printf("%s", ft_strcpy(dest,src));
//	printf("%s", ft_strncpy(dest, src, 4));
//	printf("\n%s", strncpy(dest, src, 4));
	printf("\n%s", ft_strstr(src, a));
	printf("\n%s", strstr(src, a));
	return (0);
}
