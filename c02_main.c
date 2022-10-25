/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c02_main.c                                         :+:      :+:    :+:   */
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

#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"


int main()
{
	//00
	
	char src[] = "Hello";
	char dest[] = "Testing";
	printf("\nEx00 \n%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest, src));
	
	//01
	
	char src1[] = "Hello";
	char dest1[] = "Testing";
	printf("\n\nEx01 \n%s", ft_strncpy(dest1, src1, 4));
	printf("\n%s", strncpy(dest1, src1, 4));
	
	//02
	
	printf("\n\nEx02 \n%d", ft_str_is_alpha("Hel?lo"));
	printf("\n%d", ft_str_is_alpha("Hello"));
	printf("\n%d", ft_str_is_alpha(""));
	
	//03
	
	printf("\n\nEx03 \n%d", ft_str_is_numeric("asd58"));
	printf("\n%d", ft_str_is_numeric("58"));
	printf("\n%d", ft_str_is_numeric(""));
	
	//04

	printf("\n\nEx04 \n%d", ft_str_is_lowercase("whatsUP"));
	printf("\n%d", ft_str_is_lowercase(""));
	printf("\n%d", ft_str_is_lowercase("hello"));
	
	//05
	
	printf("\n\nEx05 \n%d", ft_str_is_uppercase("WHATSup"));
	printf("\n%d", ft_str_is_uppercase(""));
	printf("\n%d", ft_str_is_uppercase("HELLO"));
	
	//06
	
	printf("\n\nEx06 \n%d", ft_str_is_printable("¶something wrong¶"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("@#this should work *,"));
	
	//07
	
	char upper[] = "TestingThisLovelyFunction";
	printf("\n\nEx07 \n%s", ft_strupcase(upper));
	
	//08
	
	char lower[] = "TestingThisLovelyFunction";
	printf("\n\nEx08 \n%s", ft_strlowcase(lower));
	
	//09
	
	// char capitalize[] = "salut, coMMent tu vas ? 42mOtsOO quarante-deux; cinquante+et+un";
	char capitalize[] = "SALUT, comment -TU -VAS- a-Aa-cc Blll__a -Af -af ? 42mots ?A ?b ?1A aaA AaAa ?A? ?A A? aaa?aabf3Aq12ffa quarante-deux; cinquante+et+un";
	printf("\n\nEx09 \n%s\n", capitalize);
	printf("%s\n", ft_strcapitalize(capitalize));
	
	//10
	/*
	char x[] = "hello";
	char y[] = "world";
	printf("string to copy: %s before copy: %s\n", y, x);
	printf("len of string: %d string to copy: %s after copy: %s", ft_strlcpy(x, y, 10), y, x);
	*/
	//11
	/*
	char nonprint[] = "asdad\n";
	ft_putstr_non_printable(nonprint);
	*/
	//12
	//Error 404 not found
	return 0;
}
