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

void	sort3(t_list **head)
{
	if (node_data(*head, 2) > node_data(*head, 1))
	{
		if (node_data(*head, 2) > node_data(*head, 0))
			sa(head);
		else
			ra(head);
	}
	else if (node_data(*head, 1) > node_data(*head, 0))
	{	
		if (node_data(*head, 2) > node_data(*head, 0))
		{
			rra(head);
			sa(head);
		}
		else
			rra(head);
	}
	else
	{
		ra(head);
		sa(head);
	}
}


// get rid of pb-pa !!!
void	sort4(t_list **a, t_list **b)
{
	pb(a, b);
	if (!is_sorted(a))
		sort3(a);
	pa(a, b);
	if (node_data(*a, 2) > node_data(*a, 0))
	{		
		if (node_data(*a, 1) < node_data(*a, 0))
			sa(a);
	}
	else
	{
		if (node_data(*a, 3) > node_data(*a, 0))
		{
			rra(a);
			sa(a);
			ra(a);
			ra(a);
		}
		else
			ra(a);
	}
}
//very bad!
void	sort5(t_list **a, t_list**b)
{
	pb(a, b);
	if (!is_sorted(a))
		sort4(a, b);
	if (node_data(*b, 0) < node_data(*a, 1))
	{
		pa(a, b);
		if (node_data(*a, 0) > node_data(*a, 1))
			sa(a);
	}
	else
		sort5else(a, b);
}

void	sort5else(t_list **a, t_list **b)
{
	if (node_data(*b, 0) < node_data(*a, 2))
		{
			ra(a);
			pa(a, b);
			sa(a);
			rra(a);
		}
		else
		{
			if (node_data(*b, 0) < node_data(*a, 3))
			{
				rra(a);
				pa(a, b);
				ra(a);
				ra(a);
			}
			else
			{
				pa(a, b);
				ra(a);
			}
	}
}

void	punk_sort(t_list **a, t_list **b)
{
	pb(a, b);
	pb(a, b);
	if (node_data(*b, 0) > node_data(*b, 1))
		sb(b);
	
}