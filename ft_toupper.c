/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:45:45 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/15 16:51:50 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** ft_toupper -- convertit une lettre minuscule en majuscule
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
int     main()
{
        int     c;
        c = 97;
        while (c <= 122)
        {
		printf("Original: %c, Result: %c\n", c, ft_toupper(c));
		c++;
        }
        return (0);
}*/
