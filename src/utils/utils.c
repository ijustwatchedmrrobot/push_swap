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

int	ft_min(t_stack *lst)
{
	int	i;

	i = lst->nbr;
	while (lst)
	{
		if (lst->nbr < i)
			i = lst->nbr;
		lst = lst->next;
	}
	return (i);
}

int	ft_max(t_stack *lst)
{
	int	i;

	i = lst->nbr;
	while (lst)
	{
		if (lst->nbr > i)
			i = lst->nbr;
		lst = lst->next;
	}
	return (i);
}

int	ft_index(t_stack *lst, int nbr)
{
	int	i;

	i = 0;
	while (lst->nbr != nbr)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int	is_sorted(t_stack *lst)
{
	int	i;

	i = lst->nbr;
	while (lst)
	{
		if (i > lst->nbr)
			return (0);
		i = lst->nbr;
		lst = lst->next;
	}
	return (1);
}
