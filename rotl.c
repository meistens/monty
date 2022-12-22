#include "monty.h"
/**
 * f_rotl - The opcode rotl rotates the stack to the top
 *          The top element of the stack becomes the last one, and the second
 *          top element of the stack becomes the first one
 *
 * @head: This is the list head
 * @line_number: Line number read
 *
 */
void f_rotl(stack_t **head, unsigned int line_number)
{
	stack_t *aux, *new_node;

	if (*head == NULL)
	{
		return;
	}
	if ((*head)->next == NULL && (*head)->prev == NULL)
	{
		return;
	}
	new_node = (stack_t *) malloc(sizeof(stack_t));

	if (new_node == NULL)
		_errors(1, line_number, head); /* Failed malloc */

	new_node->n = (*head)->n;
	f_pop(head, line_number);
	aux = (*head);
	while (aux != NULL)
	{
		if (aux->next == NULL)
		{
			aux->next = new_node;
			new_node->prev = aux;
			new_node->next = NULL;
			break;
		}
		aux = aux->next;
	}
}
