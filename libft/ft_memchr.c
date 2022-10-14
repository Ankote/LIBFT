/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:20:33 by aankote           #+#    #+#             */
/*   Updated: 2022/10/12 19:20:41 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void   *ft_memchr(const void *s, int c, size_t n)
{
   unsigned int i;

    i = 0;
    while (((char *)s)[i] && i < n)
    {
        if (((char *)s)[i] ==  c)
        {
            return ((char *)s + i);
        }
        i ++;
    }
    return (0);
 }
