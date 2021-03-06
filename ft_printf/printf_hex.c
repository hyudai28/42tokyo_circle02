/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyudai <hyudai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:42:42 by hyudai            #+#    #+#             */
/*   Updated: 2021/02/13 22:38:15 by hyudai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*hex_large(unsigned int num, int l, char *answer)
{
	int			j;
	const char	henkan[17] = "0123456789ABCDEF";

	j = 0;
	while (num > 0)
	{
		j = num % 16;
		num = num / 16;
		answer[--l] = henkan[j];
	}
	return (answer);
}

char	*hex_small(unsigned int num, int l, char *answer)
{
	unsigned int	j;
	const char		henkan[17] = "0123456789abcdef";

	j = 0;
	while (num > 0)
	{
		j = num % 16;
		num = num / 16;
		answer[--l] = henkan[j];
	}
	return (answer);
}

char	*hex_pointer(unsigned long long num, int l, char *answer)
{
	unsigned long long	j;
	const char			henkan[17] = "0123456789abcdef";

	j = 0;
	while (num > 0)
	{
		j = num % 16;
		num = num / 16;
		answer[--l] = henkan[j];
	}
	return (answer);
}
