#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: The linked list to be checked
 *
 * Return: 1 if the list has a cycle, 0 if it does not have
 * one.
 */
int check_cycle(listint_t *list)
{
	listint_t *n = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (n && fast && fast->next)
	{
		n = n->next;
		fast = fast->next->next;
		if (n == fast)
			return (1);
	}

	return (0);
}
