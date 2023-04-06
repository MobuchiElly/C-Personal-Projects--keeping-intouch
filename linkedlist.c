#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
// Write a function that prints all the elements of a listint_t list.

// Prototype: size_t print_listint(const listint_t *h);
// Return: the number of nodes
// Format: see example
// You are allowed to use printf

size_t print_listint(const listint_t *h)
{
    size_t i = 0;
    
    while(h != NULL)
    {
        printf("%d\n", h->n);

        h = h->next;

        i++;
    }
}