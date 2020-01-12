#include <stdio.h>

int ft_iterative_factorial(int num) ;
int ft_recursive_factorial(int num) ;
int ft_iterative_power(int nb, int power) ;
int ft_recursive_power(int nb, int power) ;
int ft_fibonacci(int index) ;
int ft_sqrt(int nb) ;
int ft_is_prime(int nb) ;
int ft_find_next_prime(int nb) ;

int	main()
{
	int nb =13;
//	int pw =2;
	printf("Result of %d : %d", nb, ft_find_next_prime(nb));
//	printf("Result of %d : %d", nb, ft_sqrt(nb));
	return(0);
}	
