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
# include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
	struct s_stack	*prev;
} t_stack;

//instructions

void	swap(t_stack **head);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	rotate(t_stack **lst);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	reverse_rotate(t_stack **lst);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

//utils
t_stack	*ft_stacklast(t_stack *lst);
int	ft_stacksize(t_stack *lst);
int	ft_min(t_stack *lst);
int	ft_max(t_stack *lst);
int	ft_index(t_stack *lst, int nbr);
int	find_place(t_stack *lst, int nbr);
int	is_sorted(t_stack *lst);

//cost calculating
int	case_rr(t_stack *a, t_stack *b, int nbr);
int	case_rrr(t_stack *a, t_stack *b, int nbr);
int	case_rarrb(t_stack *a, t_stack *b, int nbr);
int	case_rrarb(t_stack *a, t_stack *b, int nbr);
int	rotation_cost(t_stack *a, t_stack *b);

# endif
