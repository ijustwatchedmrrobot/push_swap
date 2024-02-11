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

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
#include "ft_printf/ft_printf.h"

//commands
int	swap(t_list **stack);
int	sa(t_list	**stack_a);
int	sb(t_list	**stack_b);
int	ss(t_list **stack_a, t_list **stack_b);
int	push(t_list **stack_dst, t_list **stack_src);
int	pa(t_list **stack_a, t_list **stack_b);
int	pb(t_list **stack_a, t_list **stack_b);
int	rotate(t_list	**stack);
int	ra(t_list	**stack_a);
int	rb(t_list	**stack_b);
int	rr(t_list	**stack_a, t_list	**stack_b);
int	reverse_rotate(t_list	**stack);
int	rra(t_list **stack_a);
int	rrb(t_list **stack_b);
int	rrr(t_list **stack_a, t_list **stack_b);

//utils
void	free_str(char **str);
void	push_ft(t_list **top, int content);
void	init_stack(t_list **stack, int ac, char **av);
int		is_sorted(t_list **head);
void	print_stack(t_list *head);
int		node_data(t_list *head, int n);

//errors
void	ft_error(char *msg);

//sort
void	sort3(t_list **head);
void	sort4(t_list **a, t_list **b);
void	sort5(t_list **a, t_list**b);
void	sort5else(t_list **a, t_list **b);
# endif