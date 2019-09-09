/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:59:59 by dlongfel          #+#    #+#             */
/*   Updated: 2019/09/05 18:05:13 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *s;
	char *res;
	char *resptr;

	s = src;
	while (*s)
		s++;
	res = (char *)malloc(s - src + 1);
	if (!res)
		return ((void *)0);
	resptr = res;
	while ((*resptr++ = *src++))
		;
	*resptr = '\0';
	return (res);
}
