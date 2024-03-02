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

void	do_rr_a(t_stack **a, t_stack **b, int nbr)
{
	while ((*a)->nbr != nbr && find_place_b(*b, nbr) > 0)
		rr(a, b);
	while ((*a)->nbr != nbr)
		ra(a);
	while (find_place_b(*b, nbr) > 0)
		rb(b);
	pb(a, b);
}

void	do_rr_b(t_stack **a, t_stack **b, int nbr)
{
	while ((*b)->nbr != nbr && find_place_a(*a, nbr) > 0)
		rr(a, b);
	while ((*b)->nbr != nbr)
		rb(b);
	while (find_place_a(*a, nbr) > 0)
		ra(a);
	pa(a, b);
}


