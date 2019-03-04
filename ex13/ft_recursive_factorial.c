/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theogell <theogell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:10:15 by theogell          #+#    #+#             */
/*   Updated: 2018/04/04 21:57:10 by theogell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_factorial(int nb)
{
	int		res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	else
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
