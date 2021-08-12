/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:12:12 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/07/29 11:12:17 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int		num;
	unsigned int		i;
	char				*str;

	i = -1;
	num = sizeof(b);
	str = b;
	while (++i < len)
		str[i] = c;
	return (b);
}