/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:51:26 by aankote           #+#    #+#             */
/*   Updated: 2022/10/12 18:51:29 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned    int i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if(s1[i] != s2[i])
        return (s1[i] - s2[i]);
        i ++;
    }
     return (0);
}
