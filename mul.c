#include "monty.h"
/**
 * f_mul - multiplies the two top elements on the stack
 * @head: This is the list head
 * @line_number: Line number read
 *
 */
void f_mul(stack_t **head, unsigned int line_number)
{
	int mul;

	if (*head == NULL || ((*head)->prev == NULL && (*head)->next == NULL))
		_errors2(9, line_number, head); /* sub failed */

	mul = (*head)->next->n * (*head)->n;
	f_pop(head, line_number);
	(*head)->n = mul;
}
