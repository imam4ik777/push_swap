#include "push_swap.h"

t_Node	*swap(t_Node *stack)
{
	t_Node	*first;
	t_Node	*second;

	if (stack == NULL || stack->next == NULL)
		return (stack);
	first = stack;
	second = stack->next;
	first->next = second->next;
	if (second->next != NULL)
		second->next->prev = first;
	second->next = first;
	first->prev = second;
	second->prev = NULL;
	return (second);
}

void	sa(t_Node **stack_a)
{
	*stack_a = swap(*stack_a);
	ft_putendl_fd("sa", 1);
}
