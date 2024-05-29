/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:52:48 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/29 14:17:36 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	compteur;

	compteur = 1;
	if (n == 0)
	{
		return (ft_putchar_fd('0', fd));
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (compteur <= n)
		compteur = compteur * 10;
	while (compteur > 1)
	{
		compteur = compteur / 10;
		ft_putchar_fd((n / compteur) + '0', fd);
		n = n % compteur;
	}
}
