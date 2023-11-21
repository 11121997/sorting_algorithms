#include "sort.h"

/**
 * change - function change places of nodes
 * @k: first node
 * @n: second node
 * Return: void
 */
void change(listint_t *k, listint_t *n)
{
	if (k->prev)
		k->prev->next = n;
	if (n->next)
		n->next->prev = k;
	k->next = n->next;
	n->prev = k->prev;
	k->prev = n;
	n->next = k;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * @list: list we want to sort it in ascending order
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *k, *h;

	if (!list || !*list || !(*list)->next)
		return;
	k = (*list)->next;
	while (k)
	{
		h = k;
		k = k->next;
		while (h && h->prev)
		{
			if (h->prev->n > h->n)
			{
				change(h->prev, h);
				if (!h->prev)
					*list = h;
				print_list((const listint_t *)*list);
			}
			else
				h = h->prev;
		}
	}
}

