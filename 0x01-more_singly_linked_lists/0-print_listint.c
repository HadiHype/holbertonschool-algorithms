#include <stdio.>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint - prints all the elements of the list
 *@h: list
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *node;
	size_t counter = 0;

	if (h == NULL)
		return (0);
	for (node = (listint_t *)h; node != NULL; node = node->next)
	{
		printf(%d\n, node->n);
		counter++;
	}
	return (counter);
}
