#include"monty.h"
/**
 *op_mod - computes the rest of the division
 *of the second top element of the stack by
 *the top element of the stack.
 *@stack: pointer  to head node
 *@l_number: number of line in file
 *Return: new node
 */
void op_mod(stack_t **stack, unsigned int l_number)
{
	int sub_n;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", l_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", l_number);
		exit(EXIT_FAILURE);
	}
	sub_n = (*stack)->n;
	op_pop(stack, l_number);
	(*stack)->n = (*stack)->n % sub_n;
}
