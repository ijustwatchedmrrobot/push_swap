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
}	t_stack;

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
void	ft_add_back(t_stack **lst, t_stack *new);
t_stack	*ft_newstack(int nbr);
void	ft_push(t_stack	**top, int nbr);
void	init_stack(t_stack **lst, int ac, char **av);
t_stack	*ft_stacklast(t_stack *lst);
int		ft_stacksize(t_stack *lst);
int		ft_min(t_stack *lst);
int		ft_max(t_stack *lst);
int		ft_index(t_stack *lst, int nbr);
int		find_place_a(t_stack *a, int nbr);
int		find_place_b(t_stack *b, int nbr);
int		is_sorted(t_stack *lst);
int		long_atoi(char *str);
int		case_rr_b(t_stack *a, t_stack *b, int nbr);
int		case_rrr_b(t_stack *a, t_stack *b, int nbr);
int		case_rarrb_b(t_stack *a, t_stack *b, int nbr);
int		case_rrarb_b(t_stack *a, t_stack *b, int nbr);
int		rotation_cost_b(t_stack *a, t_stack *b);
int		case_rr_a(t_stack *a, t_stack *b, int nbr);
int		case_rrr_a(t_stack *a, t_stack *b, int nbr);
int		case_rarrb_a(t_stack *a, t_stack *b, int nbr);
int		case_rrarb_a(t_stack *a, t_stack *b, int nbr);
int		rotation_cost_a(t_stack *a, t_stack *b);
int		do_rr_a(t_stack **a, t_stack **b, int nbr);
int		do_rrr_a(t_stack **a, t_stack **b, int nbr);
int		do_rrarb_a(t_stack **a, t_stack **b, int nbr);
int		do_rarrb_a(t_stack **a, t_stack **b, int nbr);
int		do_rr_b(t_stack **a, t_stack **b, int nbr);
int		do_rrr_b(t_stack **a, t_stack **b, int nbr);
int		do_rrarb_b(t_stack **a, t_stack **b, int nbr);
int		do_rarrb_b(t_stack **a, t_stack **b, int nbr);
void	sort3(t_stack **a);
void	sort_b3(t_stack **a, t_stack **b);
t_stack	*sort_b(t_stack **a);
t_stack	**sort_a(t_stack **a, t_stack **b);
void	sort(t_stack **a);
void	ft_error(void);
void	ft_free(t_stack **lst);
void	ft_freestr(char **lst);
int		ft_checkdup(t_stack *lst);

#endif