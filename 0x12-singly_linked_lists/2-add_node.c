#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t str_len = 0;

	/*set strig length to 0 if its NULL*/
	if (str == NULL)
		str_len = 0;

	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	/**
	 * initialize the next addr of newNode
	 * to NULL if head is NULL, if it's not
	 * move the first node to the addr of newNode
	 * ->next hence adding newNode at the beginning
	 *  of the list
	*/
	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;

	newNode->str = strdup(str);
	newNode->len = str_len;
	*head = newNode;

	return (*head);
