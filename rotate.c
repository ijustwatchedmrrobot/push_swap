/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:02:30 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/15 15:02:32 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **lst)
{
	t_stack	*temp;

	temp = *lst;
	*lst = ft_stacklast(*lst);
	(*lst)->next = temp;
	*lst = temp->next;
	temp->next = NULL;
}

void	ra(t_stack **a)
{
	if (!*a || !(*a)->next)
		return ;
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	if (!*b || !(*b)->next)
		return ;
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		return ;
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
