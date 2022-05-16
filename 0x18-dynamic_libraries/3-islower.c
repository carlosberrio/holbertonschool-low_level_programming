#include "main.h"
/**
 * _islower - imprimir función que verifica el carácter en minúscula
 * @c: The character to be checked
 * Return: siempre 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
