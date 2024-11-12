/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:22:09 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/12 15:43:53 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n++)
		*++p = (unsigned char *) c;
	return (s);
}