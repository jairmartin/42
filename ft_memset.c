/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jairmart <jairmart@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:46:11 by jairmart          #+#    #+#             */
/*   Updated: 2023/02/07 22:03:06 by jairmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

// memset - rellena una zona de memoria con bytes repetidos

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*byte;
	size_t			i;

	byte = b;
	i = 0;
	while (i++ < len)
	{
		*byte = c;
		byte++;
	}
	return (b);
}
// Ejemplo
//
//memset(str + 13, '.', 8*sizeof(char));
//
//Before memset(): GeeksForGeeks is for programming geeks.
//After memset(): GeeksForGeeks........programming geeks.
