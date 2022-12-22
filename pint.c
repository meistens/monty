#include "monty.h"
/**
 * f_pint - prints the last element added to the stack
 * @head: pointer to list's head
 * @line_number: line number read
 */
void f_pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
		_errors(3, line_number, head); /*pint failed*/

	printf("%d\n", (*head)->n);
}
