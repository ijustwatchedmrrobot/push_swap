/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:02:30 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/15 15:02:32 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **lst)
{
	t_stack	*top;	
	t_stack	*bot;

	top = *lst;
	bot = ft_stacklast(*lst);
	while (top)
	{
		if (top->next->next == NULL)
		{
			top->next = NULL;
			break ;
		}
		top = top->next;
	}
	bot->next = *lst;
	*lst = bot;
}

void	rra(t_stack **a)
{
	if (!*a || !(*a)->next)
		return ;
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	if (!*b || !(*b)->next)
		return ;
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		return ;
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
