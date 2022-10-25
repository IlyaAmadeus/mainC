/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c03_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iermolen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:33:38 by iermolen          #+#    #+#             */
/*   Updated: 2022/10/17 18:33:39 by iermolen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"

int main()
{
	//00
	printf("Ex00:\n");
	char s1[] = "Aaa";
	char s2[] = "Aab";
	char s3[] = "Aaa";
	char s4[] = "Aab";
	printf("\nHow it should look: %i", strcmp(s1, s2));
	printf("\nMy work: %i", ft_strcmp(s3, s4));

	//01
	printf("\n\nEx01:\n");
	char s5[] = "aaa";
	char s6[] = "aab";
	char s7[] = "aaa";
	char s8[] = "aab";
	printf("\nHow it should look: %d", strncmp(s5, s6, 2));
	printf("\nMy solution: %d", ft_strncmp(s7, s8, 2));

	//02
	printf("\n\nEx02:\n");
	char src[] = "Source";
	char dest[] = "Destination";
	char src1[] = "Source";
	char dest1[] = "Destination";
	printf("\nHow it should look: %s", strcat(dest, src));
	printf("\nMy solution: %s", ft_strcat(dest1, src1));
	
	//03
	printf("\n\nEx03:\n");
	char src2[] = "Source";
	char dest2[] = "Destination";
	char src3[] = "Source";
	char dest3[] = "Destination";
	printf("\nHow it should look: %s", strncat(dest2, src2, 0));
	printf("\nMy solution: %s", ft_strncat(dest3, src3, 0));

	//04
	printf("\n\nEx04:\n");
	char str[] = "ThereAreGoodPeoplePeople";
	char to_find[] = "Good";
	char str1[] = "ThereAreGoodPeoplePeople";
	char to_find1[] = "Good";
	printf("\nHow it should look: %s", strstr(str, to_find));
	printf("\nMy solution: %s\n\n", ft_strstr(str1, to_find1));

	return (0);
}


//int	strncmp(const char *s1, const char *s2, size_t n);
