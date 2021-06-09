// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   contact.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ciglesia <ciglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/09 18:31:06 by ciglesia          #+#    #+#             //
//   Updated: 2021/06/09 20:57:33 by ciglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.hpp"

Contact::Contact(void){}

void	Contact::add(int x, std::string str)
{
	if (x == 0)
		first_name = str;
	else if (x == 1)
		last_name = str;
	else if (x == 2)
		nickname = str;
	else if (x == 3)
		login = str;
	else if (x == 4)
		postal_address = str;
	else if (x == 5)
		email_address = str;
	else if (x == 6)
		phone_number = str;
	else if (x == 7)
		birthday = str;
	else if (x == 8)
		fav_meal = str;
	else if (x == 9)
		underwear = str;
	else if (x == 10)
		secret = str;
}

Contact::Contact(int x)
{
	std::string	str;
	std::string input[11] = {"- First name     : ", "- Last name      : ",
							 "- Nickname       : ", "- Login          : ",
							 "- Postal address : ", "- Email  address : ",
							 "- Phone  number  : ", "- Birthday date  : ",
							 "- Favorite meal  : ", "- Underwear color: ",
							 "- Darkest secret : "};
	for (int i = 0; i < 11; i++)
	{
		std::cout << input[i];
		std::getline(std::cin, str);
		if (std::cin.eof() == 1)
		{
			std::cin.clear();
			std::cin.ignore();
			return ;
		}
		add(i, str);
	}

}

static void	ft_putformat(std::string str)
{
	int	end;

	end = 0;
	for (int i = 0; i < 10; i++)
	{
		if (!end && !str[i])
			end = 1;
		if (!end && i < 9)
			std::cout << str[i];
		else if (!end && i == 9 && str[i + 1])
			std::cout << ".";
		else if (!end && i == 9 && !str[i + 1])
			std::cout << str[i];
		else
			std::cout << " ";
	}
}

void	Contact::show(void)
{
	std::cout << "│";
	ft_putformat(first_name);
	std::cout << "│";
	ft_putformat(last_name);
	std::cout << "│";
	ft_putformat(nickname);
	std::cout << "║\n";
}

void	Contact::put(void)
{
	std::cout << "first name      :" << first_name << "\n";
	std::cout << "last name       :" << last_name << "\n";
	std::cout << "nickname        :" << nickname << "\n";
	std::cout << "login           :" << login << "\n";
	std::cout << "postal address  :" << postal_address << "\n";
	std::cout << "email address   :" << email_address << "\n";
	std::cout << "phone number    :" << phone_number << "\n";
	std::cout << "birthday date   :" << birthday << "\n";
	std::cout << "favorite meal   :" << fav_meal << "\n";
	std::cout << "underwear color :" << underwear << "\n";
	std::cout << "darkest secret  :" << secret << "\n";
}
