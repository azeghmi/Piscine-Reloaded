/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:04:45 by azeghmi           #+#    #+#             */
/*   Updated: 2018/11/06 14:04:48 by azeghmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_swap_char(char **a, char **b, int *i)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	*i = 1;
}

int		ft_strcmp(char *a, char *b)
{
	char *ptr1;
	char *ptr2;

	ptr1 = a;
	ptr2 = b;
	while (*ptr1)
	{
		if (*ptr2 == '\0')
			return (1);
		if (*ptr2 > *ptr1)
			return (*ptr1 - *ptr2);
		if (*ptr1 > *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	if (*ptr2 != '\0')
		return (-1);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			ft_swap_char(&argv[i], &argv[i + 1], &i);
		else
			i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
