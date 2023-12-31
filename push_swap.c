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

/*
int main(int ac, char **av)
{
	t_list	**stack_a;

	stack_a = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;

	init_stack(stack_a, ac, av);
	print_stack(*stack_a);
	ft_printf("%d\n", is_sorted(stack_a));
}
*/


int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;

	init_stack(stack_a, ac, av);
	print_stack(*stack_a);
	ft_printf("%d", is_sorted(stack_a));
	sa(stack_a);
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	rr(stack_a, stack_b);
	rrr(stack_a, stack_b);
	sa(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);

	print_stack(*stack_a);
	ft_printf("%d\n", is_sorted(stack_a));
	return (0);
}
