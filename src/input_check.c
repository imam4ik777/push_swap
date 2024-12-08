/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:47:07 by imatakis          #+#    #+#             */
/*   Updated: 2024/12/08 12:58:31 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	arg_is_number(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && is_digit(av[i]))
		i++;
	return (av[i] == '\0');
}

static int	have_duplicates(char **av)
{
	int	i;
	int	j;

	for (i = 1; av[i]; i++)
	{
		for (j = 1; av[j]; j++)
		{
			if (j != i && nbstr_cmp(av[i], av[j]) == 0)
				return (1);
		}
	}
	return (0);
}

static int	arg_is_zero(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]))
		i++;
	while (av[i] && av[i] == '0')
		i++;
	return (av[i] == '\0');
}

int	is_correct_input(char **av)
{
	int	i;
	int	nb_zeros;

	nb_zeros = 0;
	for (i = 1; av[i]; i++)
	{
		if (!arg_is_number(av[i]))
			return (0);
		nb_zeros += arg_is_zero(av[i]);
	}
	return (nb_zeros <= 1 && !have_duplicates(av));
}
