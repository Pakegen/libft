/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:57:27 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/22 14:21:56 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}

#include<stdio.h>

int main()
{
	char str[] = "le Chat est dehors";
	printf("%s", ft_strchr(str, 'C'));
	printf("%s", ft_strchr(str, '\0'));
	printf("%s", ft_strchr(str, 'T'));


}
