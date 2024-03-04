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

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	ft_free(t_stack **lst)
{
	t_stack	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		(*lst)->nbr = 0;
		free(*lst);
		*lst = temp;
	}
}

void	ft_freestr(char **lst)
{
	char	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = *lst;
		lst++;
		free(temp);
	}
	*lst = NULL;
}

int	ft_checkdup(t_stack *lst)
{
	t_stack	*temp;

	while (lst)
	{
		temp = lst->next;
		while (temp)
		{
			if (lst->nbr == temp->nbr)
				return (1);
			temp = temp->next;
		}
		lst = lst->next;
	}
	return (0);
}

