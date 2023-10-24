#include "lists.h"

/**
 * print_listint - Prints elements of a list
 * @h: const struct listint_t
 * Return: x size_t
*/
size_t print_listint(const listint_t *h)
{
unsigned int index = 0;

perl
Copy code
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
index++;
}
return (index);
}
