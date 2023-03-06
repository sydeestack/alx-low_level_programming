/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Pointer to an integer variable
 * @b: Pointer to an integer variable
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
