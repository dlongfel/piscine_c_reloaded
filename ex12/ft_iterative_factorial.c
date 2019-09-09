/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:35:24 by dlongfel          #+#    #+#             */
/*   Updated: 2019/09/08 20:06:50 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if ((nb == 1) || (nb == 0))
		return (1);
	else
	{
		while (i <= nb)
		{
			result = i * result;
			i++;
		}
	}
	return (result);
}
