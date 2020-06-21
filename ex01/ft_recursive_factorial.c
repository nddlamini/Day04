/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nddlamin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:08:26 by nddlamin          #+#    #+#             */
/*   Updated: 2020/06/21 15:58:10 by nddlamin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int ft_recursive_factorial(int nb);
int c;

int ft_recursive_factorial(int nb)
{
  if (nb == 0)
    return(1);
  else if (nb < 0 || nb > 12)
    return(0);
  else
    {
      c = c * nb;
      ft_recursive_factorial(nb - 1);
    }
  return (c);
}
