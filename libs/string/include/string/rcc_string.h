/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_string.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:57:10 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/24 16:11:54 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RCC_STRING_H
# define RCC_STRING_H

# include <stdint.h>
# include <stdbool.h>

int32_t	rcc_atoi(const char *str);
int64_t	rcc_atol(const char *str);
double	rcc_atod(const char *str);
#endif