/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 16:09:26 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/08 14:03:04 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->amount = 0;
	this->top_amount = 0;
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::show_startup(void){
	std::cout << "	PHONEBOOK" << std::endl;
	std::cout << "	Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
}

void PhoneBook::add_contact(void){
//	if (this->amount == 8)
//		std::cout << "	The directory is full !" << std::endl;
//	else if (this->contacts[this->amount].set_informations(this->amount + 1))
//		this->amount++;
	if (this->amount == 8)
		this->amount = 0;
	this->contacts[this->amount].set_informations(this->amount + 1);
		this->amount++;
	if (this->top_amount < this->amount)
		this->top_amount = this->amount;
}

void PhoneBook::show_search_header(void){
	std::cout << "|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->top_amount; i++)
		this->contacts[i].display_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::search_contact(void){
	int	index;

	if (this->top_amount == 0)
		std::cout << "	Add a contact before searching !" << std::endl;
	else
	{
		this->show_search_header();
		std::cout << "	Type index of contact or 0 to exit\nindex > ";
		while (!(std::cin >> index) || (index < 0 || index > this->amount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "	Invalid Index\nindex > ";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0 && index < 9)
			this->contacts[index - 1].display();
	}
}
