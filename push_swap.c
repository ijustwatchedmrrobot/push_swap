#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack	*a;

	init_stack(&a, ac, av);
	if (!a || ft_checkdup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!is_sorted(a))
		sort(&a);
	ft_free(&a);
	return (0);
}