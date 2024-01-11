/*
 * File: 4-free_dlistint.c
 * Auth: Gedeon Obae Gekonge
 */

#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp,*l;
        tmp = head;
	while (tmp->next)
	{
		head = tmp->next;
		l = tmp;
		tmp =tmp->next;
		free(l);
	}
	free(head);
}
