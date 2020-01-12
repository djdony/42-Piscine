#include <stdio.h>

int ft_iterative_factorial(int num) ;
int ft_recursive_factorial(int num) ;
int ft_iterative_power(int nb, int power) ;
int ft_recursive_power(int nb, int power) ;

int	main()
{
	int nb =3;
	int pw =2;
	printf("Result of %d : %d", nb, ft_recursive_power(nb,pw));
	return(0);
}	
