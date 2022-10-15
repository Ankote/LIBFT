/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:17:19 by aankote           #+#    #+#             */
/*   Updated: 2022/10/14 12:17:21 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int total_size;
    char *newstr;

    i = 0;
    j = 0;
    total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
    if((newstr = malloc(sizeof(newstr) * total_size)))
    {
        while (s1[i])
        {
            newstr [i] = s1[i];
            i++;
        }
        while (s2[j])
            newstr[i++] = s2[j++];
        newstr[i] = '\0';
        return (newstr);
    }
    return (0);
}