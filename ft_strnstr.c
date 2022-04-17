/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:37:35 by akajitam          #+#    #+#             */
/*   Updated: 2022/04/17 17:42:35 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (len-- < 0 && haystack[i] != '\0')
	{
		if (needle[j] == '\0')
		{
			ptr = (char *)&haystack[len - i];
			break;
		}
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	return 	((char *)&haystack[len - i]);
}
