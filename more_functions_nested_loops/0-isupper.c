#include "main.h"
/**
* _isupper - entry point
* @c: cmpteur
* Return: 1 if c is uppercase otherwise 0
*/
int _islower(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}