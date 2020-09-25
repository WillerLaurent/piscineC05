/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 13:47:45 by lwiller           #+#    #+#             */
/*   Updated: 2020/09/24 16:38:28 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;
	long int		result;

	i = 0;
	result = 0;
	if (nb < 0)
		return (0);
	while (result <= (unsigned)nb)
	{
		result = i * i;
		if (result == (unsigned)nb)
			return (i);
		i++;
	}
	return (0);
}
