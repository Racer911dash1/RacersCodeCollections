/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rcc_math.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:46:56 by dbakker           #+#    #+#             */
/*   Updated: 2025/07/26 21:12:36 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RCC_MATH_H
# define RCC_MATH_H

# include <stdint.h>

// rcc_pow.c
int32_t	rcc_powi(int32_t base, int32_t pow);
// rcc_sqrt.c
int32_t	rcc_sqrti(int32_t num);
#endif