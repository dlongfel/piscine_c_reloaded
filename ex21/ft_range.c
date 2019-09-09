/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:05:35 by dlongfel          #+#    #+#             */
/*   Updated: 2019/09/06 16:02:16 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int *resptr;

	if (min >= max)
		return ((void *)0);
	res = malloc((max - min) * sizeof(int) + 1);
	if (!res)
		return ((void *)0);
	resptr = res;
	while (min <= max)
		*resptr++ = min++;
	*resptr = '\0';
	return (res);
}
