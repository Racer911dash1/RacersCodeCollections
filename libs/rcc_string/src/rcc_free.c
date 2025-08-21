#include "rcc_string.h"

void	rcc_free2dstr(char **ptr)
{
	for (size_t i = 0; ptr[i]; i++)
	{
		free(ptr[i]);
	}
	free(ptr);
}