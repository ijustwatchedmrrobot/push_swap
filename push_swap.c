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

int main(int ac, char **av)
{
	t_list	**a;
	t_list	**b;

	a = (t_list **)malloc(sizeof(t_list));
	b = (t_list **)malloc(sizeof(t_list));

	*a = NULL;
	*b = NULL;
	init_stack(a, ac, av);
	print_stack(*a);
	if (ac == 4)
	{
		ft_printf("sorting 3:\n");
		sort3(a);
		print_stack(*a);
	}
	if (ac == 5)
	{
		ft_printf("sorting 4:\n");
		sort4(a, b);
		print_stack(*a);
	}
	if (ac == 6)
	{
		ft_printf("sorting 5:\n");
		sort5(a, b);
		print_stack(*a);
	}
}