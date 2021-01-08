/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prebeca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:27:55 by prebeca           #+#    #+#             */
/*   Updated: 2019/09/01 11:37:12 by prebeca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(int lar, char d, char m, char f)
{
	int j;

	j = 0;
	while (j < lar)
	{
		if (j == 0)
			ft_putchar(d);
		else
		{
			if (j == lar - 1)
				ft_putchar(f);
			else
				ft_putchar(m);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, 'A', 'B', 'A');
		else
		{
			if (i == y - 1)
				draw_line(x, 'C', 'B', 'C');
			else
				draw_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}
