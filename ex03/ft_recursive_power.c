/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nddlamin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:24:18 by nddlamin          #+#    #+#             */
/*   Updated: 2020/06/21 16:06:08 by nddlamin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
  
#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{

	if ((nb == 0 && power !=0) || power < 0)
		return(0);
	if ((power == 0) || (nb < 0) && (power == 0))
		return(1);
}

