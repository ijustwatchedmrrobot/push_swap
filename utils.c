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

t_stack	*ft_stacklast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_stacksize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

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

int	find_place_b(t_stack *b, int nbr)
{
	int			i;
	t_stack *temp;

	i = 1;
	if (nbr > b->nbr && nbr < ft_stacklast(b)->nbr)
		i = 0;
	else if (nbr > ft_max(b) || nbr < ft_min(b))
		i = ft_index(b, ft_max(b));
	else
	{
		temp = b->next;
		while (b->nbr < nbr || temp->nbr > nbr)
		{
			b = b->next;
			temp = b->next;
			i++;
		}
	}
	return (i);
}

int	find_place_a(t_stack *a, int nbr)
{
	int			i;
	t_stack	*temp;

	i = 1;
	if (nbr < a->nbr && nbr > ft_stacklast(a)->nbr)
		i = 0;
	else if (nbr > ft_max(a) || nbr < ft_min(a))
		i = ft_index(a, ft_min(a));
	else
	{
		temp = a->next;
		while (a->nbr > nbr || temp->nbr < nbr)
		{
			a = a->next;
			temp = a->next;
			i++;
		}
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