#include "monty.h"
/**
 * f_pchar -  prints the char at the top of the stack, followed by a new line
 *
 * @head: This is the list head
 * @line_number: Line number read
 *
 */
void f_pchar(stack_t **head, unsigned int line_number)
{

	if (*head == NULL)
	{
		_errors2(11, line_number, head); /* pchar failed */
	}
	if ((*head)->n < 0 || (*head)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*head)->n);
}
