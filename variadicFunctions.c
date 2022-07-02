#include <stdio.h>
#include <stdarg.h>

void testPrintf(char c, ...)
{
	printf("%c", c);
}
int AddNumbers(int n, ...)
{
	int sum = 0;

	//declara um ponteiro para argument list
	va_list ptr;

	//inicializa argumentos na list pointer
	va_start(ptr, n);

	for (int i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, int);
		va_end (ptr);
	}
	return sum;
}

int main (void)
{
	testPrintf('c');

	printf("\n\n Variadic functions: \n");
	printf("\n 1 + 2 = %d ", AddNumbers(2, 1, 2));
	return (0);
}

