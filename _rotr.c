#include "monty.h"
/**
 *op_rotr - reverse the list
 *@stack: stack
 *@line_number: line number
 */
void op_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *aux1, *aux2;

	line_number++;
	if (!stack || !*stack || !(*stack)->next)
	{
		;
	}
	while ((*stack)->next)
		*stack = (*stack)->next;
	aux1 = *stack;

	while (aux1)
	{
		aux2 = aux1->prev;
		aux1->prev = aux1->next;
		aux1->next = aux2;
		aux1 = aux1->next;
	}
}
