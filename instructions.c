/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:02:30 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/15 15:02:32 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **lst)
{
	t_stack	*temp;

	temp = *lst;
	*lst = (*lst)->next;
	temp->next = (*lst)->next;
	(*lst)->next = temp;
}

void	sa(t_stack **a)
{
	if (!*a || !((*a)->next))
		return ;
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	if (!*b || !((*b)->next))
		return ;
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	if ((!*a || !((*a)->next)) || (!*b || !((*b)->next)))
		return ;
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (!*b)
		return ;
	temp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = temp;
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (!*a)
		return ;
	temp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = temp;
	ft_printf("pb\n");
}

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
			break;
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
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	if (!*b || !(*b)->next)
		return ;
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		return ;
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
