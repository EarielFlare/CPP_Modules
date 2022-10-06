/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:45:19 by cgregory          #+#    #+#             */
/*   Updated: 2022/09/25 16:56:17 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

# include "Contact.hpp"

class PhoneBook{
private:
	Contact	contacts[8];
	int		amount;
public:
	PhoneBook();
	~PhoneBook();

	void	show_startup(void);
	void	add_contact(void);
	void	search_contact(void);
	void	show_search_header(void);
};

#endif
