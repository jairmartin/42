/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jairmart <jairmart@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:06:12 by jairmart          #+#    #+#             */
/*   Updated: 2023/04/08 10:16:41 by jairmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
//int	main(void)
//{
//	int testfd = open("testfd.txt", O_CREAT | O_WRONLY);
//	char *s;
//
//	s = "Profesor";
//	ft_putendl_fd(s, testfd);
//
//	return (0);
//}
