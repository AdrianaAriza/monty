#include "monty.h"
/**
 *_ifpush - select the operation
 *@token: token to compare
 *Return: 1 sucsesfull
 */
int _ifpush(char *token)
{
	char *s = "push";
	int i = 0;

	while (s[i] == token[i] && s[i])
		i++;
	if (!s[i] && !token[i])
		return (1);
	return (-1);
}
