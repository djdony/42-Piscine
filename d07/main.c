#include <stdio.h>

int	*ft_range(int min, int max);
char *ft_strdup(char *src);
int	ft_ultimate_range(int **range, int min, int max);
char *ft_concat_params(int argc, char **argv);

int	main(int argc, char **argv)
{
//	int *arr;
//	int min = 10;
//	int max = 20;
//	printf("%d", ft_ultimate_range(&arr, min, max));
//	char str[] = "test";
//	printf("%s",ft_strdup(str));
	printf("%s",ft_concat_params(argc, argv));
	return (0);
}

