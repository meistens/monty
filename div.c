#include "monty.h"
/**
 * f_div - divides the two top elements on the stack
 * @head: This is the list head
 * @line_number: Line number read
 *
 */
void f_div(stack_t **head, unsigned int line_number)
{
	int div;

	if (*head == NULL || ((*head)->prev == NULL && (*head)->next == NULL))
		_errors2(8, line_number, head); /* div failed */
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	div = (*head)->next->n / (*head)->n;
	f_pop(head, line_number);
	(*head)->n = div;
}
