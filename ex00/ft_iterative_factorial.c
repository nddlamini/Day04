/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nddlamin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:41:48 by nddlamin          #+#    #+#             */
/*   Updated: 2020/06/21 15:57:33 by nddlamin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
  int res;
  int i;

  res = 1;
  i = 1;

  if (nb >= 0 && nb <= 12)
    {
      while (i <= nb)
	res *= i++;
      return(res);
    }
  else
    return(0);
}

