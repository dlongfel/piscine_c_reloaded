/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:47:45 by dlongfel          #+#    #+#             */
/*   Updated: 2019/09/06 16:00:34 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strcmp(char *s1, char *s2)
{
	unsigned	char	*str1;
	unsigned	char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
