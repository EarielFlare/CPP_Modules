/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:04:23 by ncolomer          #+#    #+#             */
/*   Updated: 2022/10/08 13:51:47 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact{
private:
	int					index;
	static std::string	fields_name[5];
	std::string			informations[5];

	enum Field {
		FirstName = 0,
		LastName,
		Nickname,
		PhoneNumber,
		DarkestSecret
	};
public:
	Contact();
	~Contact();

	bool	set_informations(int index);
	void	display_header(void);
	void	display(void);
};

#endif