/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theogell <theogell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:53:55 by theogell          #+#    #+#             */
/*   Updated: 2018/04/04 17:11:55 by theogell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
