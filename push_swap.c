/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:02:30 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/15 15:02:32 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;

	a = NULL;
	if (ac > 1)
	{
		init_stack(&a, ac, av);
		if (!a || ft_checkdup(a))
		{
			ft_free(&a);
			ft_error();
		}
		if (!is_sorted(a))
			sort(&a);
		ft_free(&a);
	}
	return (0);
}
__attribute__((destructor))
static void test(void)
{
	system("leaks push_swap");
}