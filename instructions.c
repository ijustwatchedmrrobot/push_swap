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

void	swap(t_stack **head)
{
	t_stack	*temp;
	t_stack *temp_next;

	if (!(*head) || !head)
		return ;
	temp = *head;
	temp_next = (*head)->next->next;
	(*head) = (*head)->next;
	(*head)->next = temp;
	(*head)->next->next = temp_next;
	ft_index(head);
}

void	sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");	
}

void	sb(t_stack **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	**temp_a;
	t_stack	**temp_b;
	
	if (!(*b) || !b)
		return ;
	temp_a = *a;
	temp_b = *b;
	*b = (*b)->next;
	*a = temp_b;
	(*a)->next = temp_a;
	ft_index(a);
	ft_index(b);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack **temp_a;
	t_stack **temp_b;

	if (!(*a) || !a)
		return ;
	temp_a = *a;
	temp_b = *b;
	*a = (*a)->next;
	*b = temp_a;
	(*b)->next = temp_b;
	ft_index(a);
	ft_index(b);
	ft_printf("pb\n");
}

