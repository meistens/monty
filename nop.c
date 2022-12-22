#include "monty.h"

/**
 * f_nop - does nothing
 * @stack: pointer to list's head_
 * @line_number: line number read
 */
void f_nop(stack_t **stack, unsigned int line_number)
{
	return;
	(void)line_number;
	(void)**stack;
}
