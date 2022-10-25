/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c06_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iermolen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:28:19 by iermolen          #+#    #+#             */
/*   Updated: 2022/10/17 09:52:49 by iermolen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	//00
	cc -Wall -Wextra -Werror ft_print_program_name.c && ./a.out | cat -e
	//01
	cc -Wall -Wextra -Werror ft_print_params.c && ./a.out test1 test2 test3 | cat -e
	//02
	cc -Wall -Wextra -Werror ft_rev_params.c && ./a.out test1 test2 test3 test4 test5
	//03
	cc -Wall -Wextra -Werror ft_sort_params.c && ./a.out aaaab aaaaa 1 8 6 j o z na A Y HHHA JJJN JJJP JJJO HHHG 88 112 5 112 114 111 110 184

	return (0);
}
