/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:02:30 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/15 15:02:32 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_node(int num)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (0);
	new_node->num = num;
	new_node->next = NULL;
}

t_stack	*ft_lastnode(t_stack *head)
{
	t_stack	*temp;

	if (!head)
		return (0);
	temp = head;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

t_stack	*ft_last2node(t_stack *head)
{
	t_stack	*temp;
	
	if (!head)
		return (0);
	temp = head;
	while (temp->next->next)
		temp = temp->next;
	return (temp);
}

void	ft_backadd(t_stack **head, t_stack *new_node, int *index)
{
	if (!head)
		return ;
	if (!(*head))
	{
		*head = new_node;
		(*head)->index = *index;
	}
	else
	{
		(ft_lastnode(*head))->next = new_node;
		(ft_lastnode(*head)->index) = *index;
	}
	(*index)++;
}

void	ft_index(t_stack **head)
{
	int			i;
	t_stack *temp;

	i = 0;
	temp = *head;
	if (!(*head) || !head)
		return ;
	while (*head)
	{
		(*head)->index = i;
		i++;
		(*head) = (*head)->next;
	}
	(*head) = temp;
}
