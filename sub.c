#include "monty.h"
/**
 * f_sub - substracts the two top elements on the stack
 * @head: This is the list head
 * @line_number: Line number read
 *
 */
void f_sub(stack_t **head, unsigned int line_number)
{
	int sub;

	if (*head == NULL || ((*head)->prev == NULL && (*head)->next == NULL))
		_errors2(7, line_number, head); /* sub failed */

	sub = (*head)->next->n - (*head)->n;
	f_pop(head, line_number);
	(*head)->n = sub;
}
