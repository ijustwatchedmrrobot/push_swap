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

//putting a or b first changes the result
// (a to b or b to a)
int	case_rr(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = find_place(b, nbr);
	if (i < ft_index(a, nbr))
		i = ft_index(a, nbr);
	return (i);
}


//size - index = reverse index
int	case_rrr(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (find_place(b, nbr))
		i = ft_lstsize(b) - find_place(b, nbr);
	if ((i < ft_lstsize(a) - ft_index(a, nbr)) && ft_index(a, nbr))
		i = ft_lstsize(a) - ft_index(a, nbr);
	return (i);
}

//again, putting a or b first changes the result
//add index of a to reverse index of b
int	case_rarrb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (find_place(b, nbr))
		i = ft_lstsize(b) - find_place(b, nbr);
	i = ft_index(a, nbr) + i;
	return (i);
}


//add index of b to reverse index of a
int	case_rrarb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (find_index(a, nbr))
		i = ft_lstsize(a) - ft_index(a, nbr);
	i = find_place(b, nbr) + i;
	return (i);
}

//again, this function will change behavior with replacing a and b
int	rotation_cost(t_stack *a, t_stack *b)
{
	int			i;
	t_stack *temp;

	temp = a;
	i = case_rrr(a, b, a->nbr);
	while (temp)
	{
		if (i > case_rr(a, b, temp->nbr))
			i = case_rr(a, b, temp->nbr);
		if (i > case_rrr(a, b, temp->nbr))
			i = case_rrr(a, b, temp->nbr);
		if (i > case_rarrb(a, b, temp->nbr))
			i = case_rarrb(a, b, temp->nbr);
		if (i > case_rrarb(a, b, temp->nbr))
			i = case_rrarb(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}
