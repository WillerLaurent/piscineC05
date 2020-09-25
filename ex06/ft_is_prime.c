/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:08:56 by lwiller           #+#    #+#             */
/*   Updated: 2020/09/24 17:13:56 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;
	long int		result;

	i = 0;
	result = 0;
	while (result <= (unsigned)nb)
	{
		result = i * i;
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int i;
	int sqrt;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	sqrt = ft_sqrt(nb);
	while (i < sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
