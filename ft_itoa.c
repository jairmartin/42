/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jairmart <jairmart@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:03:28 by jairmart          #+#    #+#             */
/*   Updated: 2023/04/23 21:26:19 by jairmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_length(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_fill_str(int size, int i, int n, char *str)
{
	while (size > i)
	{
		str[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = ft_length(n);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		i = 2;
	}
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
		n = -n;
	}
	ft_fill_str(size, i, n, str);
	str[size] = '\0';
	return (str);
}	
//#include <stdio.h>
//
//int main(void)
//{
//	printf("\n%s\n", ft_itoa(1987));
//}
//
