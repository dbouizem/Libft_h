/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:45:31 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/13 11:13:23 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** ft_bzero -- Remplie une zone mémoire avec des zéros
**
** La fonction `ft_bzero` remplit les `n` premiers octets de la zone mémoir
** pointee par `s` avec la valeur zéro. Cette opération est souvent utilisée pour
** initialiser un espace mémoire avant de l'utiliser.
**
** Compilation: gcc -Wall -Wextra -Werror ft_strlen.c ft_strlcpy.c ft_bzero.c 
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cs;

	cs = (unsigned char *) s;
	while (n--)
		*cs++ = '\0';
}
/*
int	main()
{
	char *str = malloc(20 * sizeof(char));
	if (str == NULL)
	{
		printf("Error");
		return (1);
	}
	ft_strlcpy(str, "Hi Memo", 20);
	printf("Before ft_bzero: %s\n", str);
	ft_bzero(str, 20);
	printf("After ft_bzero: %s\n", str);
	free(str);
	return (0);
}*/
