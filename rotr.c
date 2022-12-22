#include "monty.h"
/**
 * f_rotr - The opcode rotr rotates the stack to the bottom.
 *          The last element of the stack becomes the top element of the stack
 *
 * @head: This is the list head
 * @line_number: Line number read
 *
 */

void f_rotr(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head, *last = *head;

	if (*head == NULL)
	{
		return;
	}
	if ((*head)->next == NULL && (*head)->prev == NULL)
	{
		return;
	}
	while (aux != NULL)
	{
		if (aux->next == NULL)
		{
			aux->next = last;
			last->prev = aux;
			aux->prev->next = NULL;
			aux->prev = NULL;
			(*head) = aux;
			break;
		}
		aux = aux->next;
	}
	(void)line_number;
}
