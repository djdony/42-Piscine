#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char 	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char 	*ft_strupcase(char *str);
char 	*ft_strlowcase(char *str);
char 	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);

int		main(void)
{
//	char str1[] = " ";
//	char src[] = "012";
//	char a[] = "Hello world TrYY, test? 42mots; garant-deux; cing+ttt+ccc";
//	ft_putstr(str1);
//    ft_putnbr(-2147483648);
//    printf("%d", ft_atoi(str1));
//	char a[] = ft_strcpy(dest, src);
//	printf("%s", ft_strcpy(dest,src));
//	printf("%s", ft_strncpy(dest, src, 4));
//	printf("\n%s", ft_strstr(src, a));
//	printf("\n%d", ft_strncmp(src, a, 8));
//	printf("\n%s", ft_strcapitalize(a));
	printf("\n%d", ft_str_is_uppercase("HELL"));
	return (0);
}
