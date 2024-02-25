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

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_stack *lst)
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

int	find_place(t_stack *lst, int nbr)
{
	int			i;
	t_stack *temp;

	i = 1;
	if (nbr > lst->nbr && nbr < ft_lstlast(lst)->nbr)
		i = 0;
	else if (nbr > ft_max(lst) || nbr < ft_min(lst))
		i = ft_index(lst, ft_max(lst));
	else
	{
		temp = lst->next;
		while (lst->nbr < nbr || temp->nbr > nbr)
		{
			lst = lst->next;
			temp = lst->next;
			i++;
		}
	}
	return (i);
}
