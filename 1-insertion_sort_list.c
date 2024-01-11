#include "sort.h"

/**
 * insertion_sort_list - This function sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: It's a pointer to an unordered list.
 *
 * Return: None.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		prev = current->prev;
		while (prev != NULL && prev->n > current->n)
		{
			temp = current->next;
			if (prev->prev != NULL)
				prev->prev->next = current;
			else
				*list = current;
			current->prev = prev->prev;
			current->next = prev;
			prev->prev = current;
			prev->next = temp;
			if (temp != NULL)
				temp->prev = prev;
			prev = current->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
