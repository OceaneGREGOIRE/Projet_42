/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:00:47 by ogregoir          #+#    #+#             */
/*   Updated: 2023/07/15 19:48:22 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int s)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if ((char)s == str[i])
			return ((char *)str + i);
		i--;
	}
	return (0);
}
