/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:09:16 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/21 15:20:16 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned int	i;

	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			return (*str + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (NULL);
	}
	return (0);
}
