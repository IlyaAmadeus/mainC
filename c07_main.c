/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c07_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iermolen <iermolen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:28:19 by iermolen          #+#    #+#             */
/*   Updated: 2022/10/27 16:49:00 by iermolen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> //strdup
#include <stdio.h> //printf
#define KCYN  "\x1B[36m"
#define KNRM  "\x1B[0m"

#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"

int main()
{
	//00
	printf("\n________________________________");
	printf("\n\n%sEx00 - ft_strdup - duplicate the string%s\n\n", KCYN, KNRM);
	char	*src;
	char	*src1;
	char	*dest;
	char	*dest1;

	src = "DuplicateMe";
	src1 = "DuplicateMe";
	dest = ft_strdup(src);
	dest1 = strdup(src1);
	printf("Mine:\nsrc = %s, dest = %s", src, dest);
	printf("\n\n");
	printf("Standard C:\nsrc1 = %s, dest1 = %s", src1, dest1);
	printf("\n\n________________________________\n");
	free(dest);
	free(dest1);

	//01
	printf("\n\n%sEx01 - ft_range - returns an array of ints%s\n\n", KCYN, KNRM);
	int	min;
	int	max;
	int	*range;
	int	i;

	min = -5;
	max = 6;
	
	range = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%i, ", range[i]);
		i++;
	}
	printf("\n________________________________\n");
	
	//02
	printf("\n\n%sEx02 - ft_ultimate_range - allocates and assigns an array of ints%s\n\n", KCYN, KNRM);
	int	*array;
	int	size;

	min = -5;
	max = 6;
	
	size = ft_ultimate_range(&array, min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%i, ", array[i]);
		i++;
	}
	printf("\n________________________________\n");

	//03
	printf("\n\n%sEx03 - ft_strjoin - Write a function that will concatenate all the strings pointed by strs separated by sep%s\n\n", KCYN, KNRM);
	char *tab[3] = {"Hello", "World", "lmao"};
	printf("%s\n\n", ft_strjoin(3, tab, "_"));

	return (0);
}
