/**
* _memcpy - a function that copy from source to dest values
* @dest: array destination to copy to
* @src: array source to copy from
* @n: number of bytes to copy
*
* Return: return the string value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
