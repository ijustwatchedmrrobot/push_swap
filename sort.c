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
			if (i = )
		}
	}
}