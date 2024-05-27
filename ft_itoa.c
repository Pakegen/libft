/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:48:30 by qacjl             #+#    #+#             */
/*   Updated: 2024/05/27 17:43:50 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_itoa(int nb)
{
	char	*str;
	int	neg;
	long int	compteur;
	unsigned int	len;
	unsigned int	i;

	neg = 1;
	compteur = 1;
	len = 0;
	i = 0;
	if (nb < 0)
	{
		len++;
		nb = -nb;
		neg = -neg;
	}
	if (compteur > nb)
		len = 1;
	while (compteur <= nb)
	{
		compteur = compteur * 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (neg < 0)
		str[i++] = '-';
	if (nb == 0)
		str[i++] = '0';
	else
		while(i < len && nb != 0)
		{
			compteur = compteur / 10;
			str[i] = nb / compteur +'0';
			nb = nb % compteur;
			i++;
		}
	str[i] = '\0';
	return (str);
}
