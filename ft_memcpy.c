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
	unsigned char	*d;
	const unsigned char	*s;

	d = (char *) dest;
	s = (const unsigned char *) src; 
	while (n > 0)
	{
		*d = *s;
		n--;
		d++;
		s++;
	}
	return (dest);
}
