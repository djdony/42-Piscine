#include <stdio.h>
#include <time.h>
     

int ft_iterative_factorial(int num) ;
int ft_recursive_factorial(int num) ;
int ft_iterative_power(int nb, int power) ;
int ft_recursive_power(int nb, int power) ;
int ft_fibonacci(int index) ;
int ft_sqrt(int nb) ;
int ft_is_prime(int nb) ;
int ft_find_next_prime(int nb) ;
int ft_eight_queens_puzzle(void) ;

int	main()
{
    // Calculate the time taken by fun() 
    clock_t t; 
    t = clock(); 
  
	int nb =2147483647;
//	int pw =2;
//	printf("Result of %d : %d", nb, ft_eight_queens_puzzle());
//	printf("Result of %d : %d", nb, ft_iterative_factorial(nb));
//	printf("Result of %d : %d", nb, ft_recursive_factorial(nb));
//	printf("Result of %d : %d", nb, ft_iterative_power(nb, pw));
	printf("Result of %d : %d" , nb, ft_sqrt(nb));
//	printf("Result of %d : %d", nb, ft_sqrt(nb));
//	printf("Result of %d : %d", nb, ft_sqrt(nb));

    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("took %f seconds to execute \n", time_taken);
	return(0);
}	
