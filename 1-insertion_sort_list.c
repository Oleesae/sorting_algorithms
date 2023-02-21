#include "sort.h"

/**
 * insertion_sort_list - sorts a list of numbers
 * @list: head to the list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *bef, *aft;

	if (*list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		aft = current->next;

		while (current->prev && (current->n < current->prev->n))
		{
			bef = current->prev;
			current->prev = bef->prev;

			if (current->prev)
				current->prev->next = current;
			else
				*list = current;

			bef->next = current->next;
			if (bef->next)
				bef->next->prev = bef;

			current->next = bef;
			bef->prev = current;

			print_list(*list);
		}
		current = aft;
	}
}
