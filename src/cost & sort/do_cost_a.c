/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_cost_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:02:30 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/15 15:02:32 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_rr_a(t_stack **a, t_stack **b, int nbr)
{
	while ((*a)->nbr != nbr && find_place_b(*b, nbr) > 0)
		rr(a, b);
	while ((*a)->nbr != nbr)
		ra(a);
	while (find_place_b(*b, nbr) > 0)
		rb(b);
	pb(a, b);
	return (-1);
}

int	do_rrr_a(t_stack **a, t_stack **b, int nbr)
{
	while ((*a)->nbr != nbr && find_place_b(*b, nbr) > 0)
		rrr(a, b);
	while ((*a)->nbr != nbr)
		rra(a);
	while (find_place_b(*b, nbr) > 0)
		rrb(b);
	pb(a, b);
	return (-1);
}

int	do_rrarb_a(t_stack **a, t_stack **b, int nbr)
{
	while ((*a)->nbr != nbr)
		rra(a);
	while (find_place_b(*b, nbr) > 0)
		rb(b);
	pb(a, b);
	return (-1);
}

int	do_rarrb_a(t_stack **a, t_stack **b, int nbr)
{
	while ((*a)->nbr != nbr)
		ra(a);
	while (find_place_b(*b, nbr) > 0)
		rrb(b);
	pb(a, b);
	return (-1);
}
