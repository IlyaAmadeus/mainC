/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c05_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iermolen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:28:19 by iermolen          #+#    #+#             */
/*   Updated: 2022/10/17 09:52:49 by iermolen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"
// #include "../C_00/ex00/ft_putchar.c"
//#include "ex03/ft_str_is_alpha.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"



int main()
{
	//00
	printf("\n\nEx00 - Iter. factorial:  \n");
	printf("Test 1: %i\n", ft_iterative_factorial(-1));
	printf("Test 2: %i\n", ft_iterative_factorial(0));
	printf("Test 3: %i\n", ft_iterative_factorial(1));
	printf("Test 4: %i\n", ft_iterative_factorial(5));
	printf("Test 5: %i\n", ft_iterative_factorial(13));
	//01
	printf("\n\nEx01 - Rec. factorial:  \n");
	printf("Test 1: %i\n", ft_recursive_factorial(-1));
	printf("Test 2: %i\n", ft_recursive_factorial(0));
	printf("Test 3: %i\n", ft_recursive_factorial(1));
	printf("Test 4: %i\n", ft_recursive_factorial(5));
	printf("Test 5: %i\n", ft_recursive_factorial(10));
	//02
	printf("\n\nEx02 - Iter. power \n");
	printf("Test 1: %i\n", ft_iterative_power(0, 1));
	printf("Test 2: %i\n", ft_iterative_power(0, 0));
	printf("Test 3: %i\n", ft_iterative_power(0, -2));
	printf("Test 4: %i\n", ft_iterative_power(10, -2));
	printf("Test 5: %i\n", ft_iterative_power(2, 30));
	
	//03
	printf("\n\nEx03 - Rec. power \n");
	printf("Test 1: %i\n", ft_recursive_power(0, 1));
	printf("Test 2: %i\n", ft_recursive_power(0, 0));
	printf("Test 3: %i\n", ft_recursive_power(0, -2));
	printf("Test 4: %i\n", ft_recursive_power(10, -2));
	printf("Test 5: %i\n", ft_recursive_power(2, 30));
	
	//04
	printf("\n\nEx04 - Fibonacci \n");
	printf("%i, ", ft_fibonacci(0));
	printf("%i, ", ft_fibonacci(1));
	printf("%i, ", ft_fibonacci(2));
	printf("%i, ", ft_fibonacci(3));
	printf("%i, ", ft_fibonacci(4));
	printf("%i, ", ft_fibonacci(5));
	printf("%i, ", ft_fibonacci(6));
	printf("%i, ", ft_fibonacci(7));
	printf("%i", ft_fibonacci(20));
	printf("\n\nIf input is negative: %i", ft_fibonacci(-10));

	//05
	printf("\n\nEx05 - ft_sqrt\n");
	printf("Test: %i\n", ft_sqrt(25));
	printf("Test: %i\n", ft_sqrt(-25));
	printf("Test: %i\n", ft_sqrt(169));
	printf("Test: %i\n", ft_sqrt(1));
	printf("Test: %i\n", ft_sqrt(2147483647));
	
	//06
	printf("\n\nEx06 - ft_is_prime\n");
	printf("Test: %i\n", ft_is_prime(-1));
	printf("Test: %i\n", ft_is_prime(10));
	printf("Test: %i\n", ft_is_prime(29));
	printf("Test: %i\n", ft_is_prime(1));
	printf("Test: %i\n", ft_is_prime(2147483647));

	//07
	printf("\n\nEx07 - ft_find_next_prime\n");
	printf("%i", ft_find_next_prime(10));
	return (0);
}
