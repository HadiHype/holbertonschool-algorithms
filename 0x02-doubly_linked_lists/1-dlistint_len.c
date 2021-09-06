#include <stdio.h>
#include "lists.h"

/**
 * size_t dlistint_len - function return nb of elements
 * @h: pointer
 *
 * Description: print the total nb of elements
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
        size_t count = 0;

        while (h)
        {
                h = h->next;
                count++;
        }
        return (count);
}
