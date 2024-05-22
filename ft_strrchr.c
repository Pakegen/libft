/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:07:52 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/22 15:25:41 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	 char	*str;

	str = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			str = (char *)s;
		}
		s++;
	}
	if (*s == c)
		str = (char *)s;
	return (str);
}
