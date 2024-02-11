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

void	free_str(char **str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	while (i >= 0)
		free(*(str + i--));
}

void	push_ft(t_list **top, int content)
{
	t_list	*temp;

	temp = ft_lstnew((void *)(intptr_t)content);
	ft_lstadd_back(top, temp);
}

void	init_stack(t_list **stack, int ac, char **av)
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
		push_ft(stack, ft_atoi(args[i]));
		i++;
	}
	if (ac == 2)
		free_str(args);
}

int		is_sorted(t_list **head)
{
	t_list	*top;

	top = *head;
	while (top && top->next)
	{
		if (top->content > top->next->content)
			return (0);
		top = top->next;
	}
	return (1);
}

void	print_stack(t_list *head)
{
	t_list	*temp;

	temp = head;
	while (temp != NULL)
	{
		ft_printf("%d\n",(int)(intptr_t)temp->content);
		temp = temp->next;
	}
}

int	node_data(t_list *head, int n)
{
	t_list	*temp;

	if (head == NULL)
		return (-1);
	temp = head;
	while (n--)
		temp = temp->next;
	return ((int)(intptr_t)temp->content);
}
