#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n:The maximum number of bytes to concaenate from src
 *Return: dest;
 */
char *_strncat(char *dest, char *src, int n)
{
int destlenght = 0;
int srclenght = 0;
int i;

for (i = 0; dest[i] != '\0' ; i++)
destlenght++;
for (i = 0; src[i] != '\0' ; i++)
srclenght++;

for (i = 0; i < n && i < srclenght; i++)
dest[destlenght + i] = src[i];
return (dest);
}
