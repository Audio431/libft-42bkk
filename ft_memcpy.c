/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:56:08 by akajitam          #+#    #+#             */
/*   Updated: 2022/04/17 16:18:29 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	s = src;
	d = dst;
	if (s == NULL || d == NULL)
		return (dst);
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
