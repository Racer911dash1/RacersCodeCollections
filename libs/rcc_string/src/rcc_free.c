#include "rcc_string.h"

void	rcc_free2d(void **ptr, size_t size)
{
	for (size_t i = 0; i < size ; i++)
	{
		free(ptr[i]);
	}
	free(ptr);
}