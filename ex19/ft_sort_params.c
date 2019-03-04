/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theogell <theogell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:19:56 by theogell          #+#    #+#             */
/*   Updated: 2018/04/04 16:21:07 by theogell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char		**ft_sort_params(int ac, char **av)
{
	char	*tmp;
	int		i;

	i = 1;
	if (ac >= 2)
	{
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				tmp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = tmp;
				i = 0;
			}
			else
				i++;
		}
	}
	return (av);
}

int			main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			ft_putstr(ft_sort_params(ac, av)[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
