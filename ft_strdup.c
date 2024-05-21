/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:38:43 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/21 12:09:54 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stddef.h>

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int				i;
	char	*str;
	char *s1;

	s1 = (char *)s;
	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (0);

	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include<stdio.h>

int	main()
{
	char	str[] = "je m appelle rio";
	printf("%s", ft_strdup(str));
}
