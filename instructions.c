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

	if (!*lst || !((*lst)->next))
		return ;
	temp = *lst;
	*lst = (*lst)->next;
	temp->next = (*lst)->next;
	(*lst)->next = temp;
}

void	sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	t_stack	*temp;

	if (!*b || !((*b)->next))
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
	ft_printf("sb\n");
}

int	sa(t_stack **a)
{
	if (swap(a) == -1)
		return (-1);
	ft_printf("sa\n");
	return (0);
}

int	sb(t_stack **b)
{
	if (swap(b) == -1)
		return (-1);
	ft_printf("sb\n");
	return (0);
}

int	ss(t_stack **a, t_stack **b)
{
	if ((*!a || !((*a)->next)) || (!*b || !((*b)->next)))
		return (-1);
	swap(a);
	swap(b);
	ft_printf("ss\n");
	return (0);
}

