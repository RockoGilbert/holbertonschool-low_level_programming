include < stdio.h >

/**
 * main - Prints alphabetic
 *
 * Return:0 Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar ('\n');
	return (0);
}
