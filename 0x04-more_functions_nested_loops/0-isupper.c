#include "main.h"
/**
*_isupper - checks for uppercase or not
*@c: tested character
*Return: 1 if it is uppercase , 0 if it is  not
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
