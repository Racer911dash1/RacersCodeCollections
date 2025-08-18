/* ************************************************************************** */
/*                                                                            */
/* File:        rcc_free.c                                                    */
/*                                                                            */
/* Author:      Racer911-1                                                    */
/* Created:     2025/08/17 16:53:03                                           */
/*                                                                            */
/* Modified by: Racer911-1                                                    */
/* Modified:    2025/08/17 17:24:35                                           */
/*                                                                            */
/* ************************************************************************** */

#include "rcc_string.h"

void	rcc_free2dstr(char **ptr)
{
	for (size_t i = 0; ptr[i]; i++)
	{
		free(ptr[i]);
	}
	free(ptr);
}