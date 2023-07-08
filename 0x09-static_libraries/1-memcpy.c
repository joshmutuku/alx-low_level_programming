#include "main.h"
/**
 *_memcpy - This is a function that copies memory area
 *@dest: specific  memory where is stored
 *@src: specific  memory where is copied
 *@n: number of bytes
 *
 *Return: the copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

