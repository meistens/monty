#include "monty.h"
/**
 * f_swap - swaps the value of the last two elements added to the stack
 * @stack: pointer to list's head
 * @line_number: line number read
 */

void f_swap(stack_t **stack, unsigned int line_number)
{
	int swap_aux;

	if ((*stack) == NULL)
		_errors(5, line_number, stack); /* Swap failed */
	else if ((*stack)->prev == NULL && (*stack)->next == NULL)
		_errors(5, line_number, stack);
	else
	{
		swap_aux = (*stack)->n;
		(*stack)->n = ((*stack)->next)->n;
		(*stack)->next->n = swap_aux;
	}
}
