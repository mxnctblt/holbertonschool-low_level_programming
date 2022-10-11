/**
 * swap_int - entry point
 *
 * @a: value to swap
 * @b: other value to swap
 *
 * Return: Always O.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
