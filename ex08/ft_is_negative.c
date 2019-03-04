/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theogell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:02:21 by theogell          #+#    #+#             */
/*   Updated: 2018/04/03 17:02:22 by theogell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}