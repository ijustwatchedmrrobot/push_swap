/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:02:30 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/15 15:02:32 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_stack **a)
{
	if (n_data(*a, 2) > n_data(*a, 1))
	{
		if (n_data(*a, 2) > n_data(*a, 0))
			sa(a);
		else
			ra(a);
	}
	else if (n_data(*a, 1) > n_data(*a, 0))
	{
		if (n_data(*a, 2) > n_data(*a, 0))
		{
			rra(a);
			sa(a);
		}
		else
			rra(a);
	}
	else
	{
		ra(a);
		sa(a);
	}
}

void	sort_b3(t_stack **a, t_stack **b)
{
	int			i;
	t_stack	*temp;

	while (ft_stacksize(*a) > 3 && !is_sorted(*a))
	{
		temp = *a;
		i = rotation_cost_b(*a, *b);
		while (i >= 0)
		{
			if (i == case_rr_b(*a, *b, temp->nbr))
				i = do_rr_a(a, b, temp->nbr);
			else if (i == case_rrr_b(*a, *b, temp->nbr))
				i = do_rrr_a(a, b, temp->nbr);
			else if (i == case_rrarb_b(*a, *b, temp->nbr))
				i = do_rrarb_a(a, b, temp->nbr);
			else if (i == case_rarrb_b(*a, *b, temp->nbr))
				i = do_rarrb_a(a, b, temp->nbr);
			else
				temp = temp->next;
		}
	}
}

t_stack	*sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ft_stacksize(*a) > 3 && !is_sorted(*a))
		pb(a, &b);
	if (ft_stacksize(*a) > 3 && !is_sorted(*a))
		pb(a, &b);
	if (ft_stacksize(*a) > 3 && !is_sorted(*a))
		sort_b3(a, &b);
	if (!is_sorted(*a))
		sort3(a);
	return (b);
}

t_stack	**sort_a(t_stack **a, t_stack **b)
{
	int			i;
	t_stack	*temp;
	while (*b)
	{
		temp = *b;
		i = rotation_cost_a(*a, *b);
		while (i >= 0)
		{
			if (i == case_rr_a(*a, *b, temp->nbr))
				i = do_rr_b(a, b, temp->nbr);
			else if (i == case_rrr_a(*a, *b, temp->nbr))
				i = do_rrr_b(a, b, temp->nbr);
			else if (i == case_rrarb_a(*a, *b, temp->nbr))
				i = do_rrarb_b(a, b, temp->nbr);
			else if (i == case_rarrb_a(*a, *b, temp->nbr))
				i = do_rarrb_b(a, b, temp->nbr);
			else
				temp = temp->next;
		}
	}
	return (a);
}

void	sort(t_stack **a)
{
	t_stack	*b;
	int		i;

	b = NULL;
	if (ft_stacksize(*a) == 2)
		sa(a);
	else
	{
		b = sort_b(a);
		a = sort_a(a, &b);
		i = ft_index(*a, ft_min(*a));
		if (i < ft_stacksize(*a) - i)
		{
			while ((*a)->nbr != ft_min(*a))
				ra(a);
		}
		else
		{
			while ((*a)->nbr != ft_min(*a))
				rra(a);
		}
	}	
}

//consisder changing b to double pointer!!