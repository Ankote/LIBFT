/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:37:08 by aankote           #+#    #+#             */
/*   Updated: 2022/10/17 14:37:12 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char **first_alloc(char const *s, char c)
{
    int i;
    int cpt;
    int test;
    char **p;

    i =0;
    test = 0;
    cpt = 0;
    if (s)
    {
    while (s[i])
    {
        if(s[i] != c && test == 0)
        {
            test = 1;
            cpt ++;
        }
        if (s[i] == c)
         test = 0;
        i++;
    }
       if((p = (char **)malloc(sizeof(char *) * (cpt + 1))))
       return (p);
    }
    return (0);
}

char **ft_split(char const *s, char c)
{
    int i;
    int start;
    int k;
    char **p;

    i = 0;
    start = -1;
    k = 0;
    if ((p = first_alloc(s,c)))
    {
        while (i <= ft_strlen(s)) 
        {
            if (s[i] != c && start == -1) 
                start = i;
            else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
            {
                p[k++] = ft_substr(s,start,i - start);
                start = -1;
            }
        i++;
        }
        p[k] = NULL;  
        return (p);
    }
    return (0);
}

