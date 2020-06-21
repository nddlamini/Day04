/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nddlamin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:52:05 by nddlamin          #+#    #+#             */
/*   Updated: 2020/06/21 16:06:59 by nddlamin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int nb)
{
	if(nb < 0)
		return(-1);
	if(nb <=2)
		return(nb);
	return ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2);
}
