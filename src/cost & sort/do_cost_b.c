/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_cost_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:02:30 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/15 15:02:32 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_rr_b(t_stack **a, t_stack **b, int nbr)
{
	while ((*b)->nbr != nbr && find_place_a(*a, nbr) > 0)
		rr(a, b);
	while ((*b)->nbr != nbr)
		rb(b);
	while (find_place_a(*a, nbr) > 0)
		ra(a);
	pa(a, b);
	return (-1);
}

int	do_rrr_b(t_stack **a, t_stack **b, int nbr)
{
	while ((*b)->nbr != nbr && find_place_a(*a, nbr) > 0)
		rrr(a, b);
	while ((*b)->nbr != nbr)
		rrb(b);
	while (find_place_a(*a, nbr) > 0)
		rra(a);
	pa(a, b);
	return (-1);
}

int	do_rrarb_b(t_stack **a, t_stack **b, int nbr)
{
	while (find_place_a(*a, nbr) > 0)
		rra(a);
	while ((*b)->nbr != nbr)
		rb(b);
	pa(a, b);
	return (-1);
}

int	do_rarrb_b(t_stack **a, t_stack **b, int nbr)
{
	while (find_place_a(*a, nbr) > 0)
		ra(a);
	while ((*b)->nbr != nbr)
		rrb(b);
	pa(a, b);
	return (-1);
}
