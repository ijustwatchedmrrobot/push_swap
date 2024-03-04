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

void	ft_add_back(t_stack **lst, t_stack *new)
{
	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
		(ft_stacklast(*lst))->next = new;
}

t_stack	*ft_newstack(int nbr)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error();
	new->nbr = nbr;
	new->next = NULL;
	return (new);
}

void	list_args(char **av, t_stack *lst)
{
	int	i;

	i = 1;
	while (av[i] != NULL)
	{
		
	}
}