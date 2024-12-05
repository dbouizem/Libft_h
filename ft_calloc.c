/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 00:39:10 by dbouizem          #+#    #+#             */
/*   Updated: 2024/12/02 00:39:11 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** ft_calloc - Alloue et initialise un bloc de mémoire.
** 
** Cette fonction alloue un bloc de mémoire de taille `num * size` octets
** et initialisetous les octets du bloc à zéro. Si l'allocation échoue,
** elle retourne NULL
** Compilatin: gcc -Wall -Wextra -Werror ft_calloc.c ft_memset.c
*/

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*alloc;
	size_t	tot_size;

	tot_size = num * size;
	alloc = malloc(tot_size);
	if (!(alloc))
		return (NULL);
	ft_memset(alloc, 0, tot_size);
	return (alloc);
}
/*
int	main()
{
	size_t	num = 10;
	size_t	size = sizeof(int);
	size_t	i = 0;
	
	int	*arr = ft_calloc(num, size);
	if (arr == NULL)
	{
		printf("Error");
		return (1);
	}
	while (i < num)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
