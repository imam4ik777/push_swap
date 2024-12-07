#include "push_swap.h"

void	push(t_Node **stack_a, t_Node **stack_b)
{
	t_Node	*first_a;

	if (*stack_a == NULL)
		return ;
	first_a = *stack_a;
	*stack_a = (*first_a).next;
	if (*stack_a != NULL)
		(*stack_a)->prev = NULL;
	first_a->next = *stack_b;
	if (*stack_b != NULL)
		(*stack_b)->prev = first_a;
	*stack_b = first_a;
}

void	pb(t_Node **stack_a, t_Node **stack_b)
{
	push(stack_a, stack_b);
	ft_putendl_fd("pb", 1);
}

void	pa(t_Node **stack_a, t_Node **stack_b)
{
	push(stack_b, stack_a);
	ft_putendl_fd("pa", 1);
}
