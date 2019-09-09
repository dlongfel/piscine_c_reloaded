/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:43:05 by dlongfel          #+#    #+#             */
/*   Updated: 2019/09/05 17:57:09 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;

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

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	printargv(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;

	i = 1;
	size = argc;
	while (i < size)
	{
		j = 1;
		while (j < size - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	printargv(argc, argv);
	return (0);
}
