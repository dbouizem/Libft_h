/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:26:35 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/11 18:31:41 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** isalnum -- test de caractères alphanumériques
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

void    ft_putstr_fd(char *str, int fd)
{
        while (*str)
                write(fd, str++, 1);
}

int     main()
{
        int     c;

        c = 0;
        while (c <= 127)
        {
                if (ft_isalnum(c))
                {
                        ft_putstr_fd("OK for: ", 1);
                        ft_putchar_fd(c, 1);
                        ft_putchar_fd('\n', 1);
                }
                else
                {
                        ft_putstr_fd("Not ALPHA  and NOT DIGIT for: ", 1);
                        ft_putchar_fd(c, 1);
                        ft_putchar_fd('\n', 1);
                }
                c++;
        }
        return (0);
}*/
