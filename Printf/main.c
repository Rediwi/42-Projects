#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int x = 0;
	printf("printf: %s %s\n", "Hello world", NULL);
	ft_printf("ft_printf: %s %s\n", "Hello world", NULL);
	printf("printf: %p %p\n", &x, NULL);
	ft_printf("ft_printf: %p %p\n", &x, NULL);
	ft_printf("%");
	ft_printf("Hola mundo cómo estas\n");
	ft_printf("%d\n", 25);
	ft_printf("%s %s\n", "Hello world", NULL);
	ft_printf("%x %X\n", 2147483648, -2147483649);
	printf("original: %x %X\n", 2147483648, -2147483649);
	ft_printf("%s%d%d%d%d%d%d\n", NULL, 128391294,128391294,128391294,128391294,128391294,128391294);
	printf("%s%d%d%d%d%d%d\n", NULL, 128391294,128391294,128391294,128391294,128391294,128391294);
	ft_printf("%%%%\n");
	return (0);
}
