#include "monty.h"

/**
 * f_pall - function prints stack
 * @head: head
 * @counter: useless
 * Return: void
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
