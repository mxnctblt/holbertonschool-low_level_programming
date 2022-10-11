/**
 * _strlen - entry point
 *
 * @s: string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
