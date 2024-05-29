/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:38:47 by qacjl             #+#    #+#             */
/*   Updated: 2024/05/29 13:50:47 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (0);
	while (start < len)
	{
		str[start] = s[start];
		start++;
	}
	str[start] = '\0';
	return (str);


}
