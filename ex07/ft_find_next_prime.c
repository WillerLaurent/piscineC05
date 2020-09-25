/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:32:59 by lwiller           #+#    #+#             */
/*   Updated: 2020/09/24 17:08:46 by lwiller          ###   ########lyon.fr   */
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
	return (i - 1);
}

int	ft_is_prime(int nb)
{
	unsigned int i;
	unsigned int sqrt;

	if (nb == 2)
		return (1);
	i = 2;
	sqrt = ft_sqrt(nb);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;
	int prime;
	int test;

	i = 0;
	test = 0;
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	prime = nb + 1;
	while (test == 0)
	{
		if (prime % 2 == 0)
			prime++;
		if (ft_is_prime(prime))
			test = 1;
		prime++;
	}
	return (prime - 1);
}
