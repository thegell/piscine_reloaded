/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theogell <theogell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:36:23 by theogell          #+#    #+#             */
/*   Updated: 2018/04/04 22:05:46 by theogell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	if ((tab = (int *)malloc(sizeof(int) * (max - min))) == NULL)
		return (NULL);
	while (max - min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
