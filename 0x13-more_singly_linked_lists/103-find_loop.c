#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head;
	listint_t *tortoise = head;

	if (!head)
		return (NULL);

	while (hare && tortoise && tortoise->next)
	{
		tortoise = tortoise->next->next;
		hare = hare->next;
		if (tortoise == hare)
		{
			hare = head;
			while (hare != tortoise)
			{
				hare = hare->next;
				tortoise = tortoise->next;
			}
			return (tortoise);
		}
	}

	return (NULL);
}
