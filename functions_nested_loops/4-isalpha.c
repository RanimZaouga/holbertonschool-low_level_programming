#include "main.h"
/**
* _isalpha - entry point
* @c: cmpteur
* Return: 1 if c is a letter otherwise 0
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
