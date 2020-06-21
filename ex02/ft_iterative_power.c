/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nddlamin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:14:45 by nddlamin          #+#    #+#             */
/*   Updated: 2020/06/21 15:58:50 by nddlamin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int ft_iterative_power(int nb,int power)
{
   power = 1;
  
  if (nb < 0 || nb >= 32767)
    return(0);
  else
    {
      while (power < nb && (power * power) < nb)
	power++;
    }
  return (power);
}
int main()
{
	ft_iterative_power(1,4);
	return 0;
}
