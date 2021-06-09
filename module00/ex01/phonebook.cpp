// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   phonebook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ciglesia <ciglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/09 17:38:18 by ciglesia          #+#    #+#             //
//   Updated: 2021/06/09 20:19:20 by ciglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.hpp"

int	ft_prompt()
{
	std::string	cmd;

	std::cout << "$ >> ";
	std::getline(std::cin, cmd);
	if (cmd.compare("EXIT") == 0)
		return (0);
	if (cmd.compare("ADD") == 0)
		return (1);
	if (cmd.compare("SEARCH") == 0)
		return (2);
	if (std::cin.eof() == 1)
	{
		std::cin.clear();
		std::cin.ignore();
		return (0);
	}
	return (3);
}

void	ft_search(Contact *book, int c)
{
	std::cout << "╔══════════════════════════════════════════╗\n";
	for (int i = 0; i < c; i++)
	{
		std::cout << "║" << i + 1 << "        ";
		book[i].show();
	}
	std::cout << "╚══════════════════════════════════════════╝\n";
}

int	main()
{
	int			op;
	int			c;
	Contact		book[8];

	std::cout << "Welcome to the \e[1mcrappy awsome\e[0m 8 contact phonebook.\n";
	std::cout << "Please enter a command (EXIT/ADD/SEARCH) after the prompt:\n\n";
	c = 0;
	while ((op = ft_prompt()) != 0)
	{
		if (op == 1 && c < 8)
			book[c++] = Contact(1);
		else if (op == 1 && c == 8)
			std::cout << "phonebook is full\n";
		if (op == 2)
			ft_search(book, c);
		if (op == 3)
		{
			std::cout << "wtf\n";
			continue ;
		}
	}
	std::cout << "bye\n";
	return (0);
}
