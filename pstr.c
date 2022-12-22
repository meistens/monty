#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 *          followed by a new line.
 *
 * @head: This is the list head
 * @line_number: Line number read
 *
 */
void f_pstr(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (*head == NULL)
	{
		printf("\n");
		return;
	}
	while (aux != NULL)
	{
		if (aux->n <= 0 || aux->n > 127)
			break;
		printf("%c", aux->n);
		aux = aux->next;
	}
	printf("\n");
	(void)line_number;
}
