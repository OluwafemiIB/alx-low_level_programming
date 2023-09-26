#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int x;

	x = 0;
	while (x < n)  /*Declaration for WHILE statement*/
	{
		*(dest + x) = *(src + x); /*add 1 position dest and src*/
		x++;

	} /*END WHILE*/


	return (dest);
}
