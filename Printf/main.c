#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char	*ptr = NULL;
	ft_printf("%p", ptr);
	printf("%p", ptr);
	return (0);
}
