/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:30:45 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/29 11:21:00 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	int		i;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (size-- > 0)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
