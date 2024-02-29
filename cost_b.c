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
//those functions are calculating the rotation count
int	case_rr_b(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = find_place_b(b, nbr);
	if (i < ft_index(a, nbr))
		i = ft_index(a, nbr);
	return (i);
}
//size - index = reverse index
int	case_rrr_b(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (find_place_b(b, nbr))
		i = ft_stacksize(b) - find_place_b(b, nbr);
	if ((i < ft_stacksize(a) - ft_index(a, nbr)) && ft_index(a, nbr))
		i = ft_stacksize(a) - ft_index(a, nbr);
	return (i);
}

int	case_rarrb_b(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (find_place_b(b, nbr))
		i = ft_stacksize(b) - find_place_b(b, nbr);
	i = ft_index(a, nbr) + i;
	return (i);
}
//add index of b to reverse index of a
int	case_rrarb_b(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (find_index(a, nbr))
		i = ft_stacksize(a) - ft_index(a, nbr);
	i = find_place_b(b, nbr) + i;
	return (i);
}

int	rotation_cost_b(t_stack *a, t_stack *b)
{
	int			i;
	t_stack *temp;

	temp = a;
	i = case_rrr(a, b, a->nbr);
	while (temp)
	{
		if (i > case_rr_b(a, b, temp->nbr))
			i = case_rr_b(a, b, temp->nbr);
		if (i > case_rrr_b(a, b, temp->nbr))
			i = case_rrr_b(a, b, temp->nbr);
		if (i > case_rarrb_b(a, b, temp->nbr))
			i = case_rarrb_b(a, b, temp->nbr);
		if (i > case_rrarb_b(a, b, temp->nbr))
			i = case_rrarb_b(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}
