// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ciglesia <ciglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/09 15:17:00 by ciglesia          #+#    #+#             //
//   Updated: 2021/06/09 15:32:28 by ciglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				if ('a' <= av[i][j] && av[i][j] <= 'z')
					std::cout << (char)(av[i][j] - ('a' - 'A'));
				else
					std::cout << av[i][j];
			}
		}
		std::cout << '\n';
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
