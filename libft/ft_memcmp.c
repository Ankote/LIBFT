/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:01:52 by aankote           #+#    #+#             */
/*   Updated: 2022/10/12 21:02:21 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned int i;

    i = 0;
    while(i < n)
    {
        if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
        return (-1);
        if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
        return (1);
        i++;
    }
    return (0);
}