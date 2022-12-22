#include "monty.h"
/**
 * f_add - Adds two top elements on the stack
 * @head: This is the list head
 * @line_number: Line number read
 *
 */

void f_add(stack_t **head, unsigned int line_number)
{
	int sum;

	if (*head == NULL || ((*head)->prev == NULL && (*head)->next == NULL))
		_errors(6, line_number, head); /* Add failed */

	sum = (*head)->n + (*head)->next->n;
	f_pop(head, line_number);
	(*head)->n = sum;
}
