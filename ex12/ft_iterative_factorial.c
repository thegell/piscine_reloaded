/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theogell <theogell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:47:24 by theogell          #+#    #+#             */
/*   Updated: 2018/04/04 21:57:09 by theogell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = 1;
	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}
