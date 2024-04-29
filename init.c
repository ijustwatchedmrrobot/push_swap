/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
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
	t_stack	*last;

	if (!lst || !new)
		ft_error();
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_stacklast(*lst);
		last->next = new;
	}
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

void	ft_push(t_stack	**top, int nbr)
{
	t_stack	*temp;

	temp = ft_newstack(nbr);
	ft_add_back(top, temp);
}

void	init_stack(t_stack **lst, int ac, char **av)
{
	char	**args;
	int		i;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{
		ft_push(lst, long_atoi(args[i]));
		i++;
	}
	if (ac == 2)
		ft_freestr(args);
}
