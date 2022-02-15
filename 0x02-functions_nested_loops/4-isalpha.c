#include "main.h"
/**
 * _isalpha - imprimir función que verifica el carácter en minúscula
 * @c: variable
 * Return: siempre 0
*/

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
