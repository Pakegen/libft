/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:56:47 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/21 09:31:40 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destc;
	const unsigned	*srcc;

	i = 0;
	destc = (unsigned char *) dest;
	srcc = (const unsigned char *) src; 
	while (destc[i])
	{
		destc[i] = srcc[i];
		i++;
	}
}
