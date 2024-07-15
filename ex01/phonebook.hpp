/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:16:47 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/15 15:22:14 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		std::string	get_first(void);
		std::string	get_last();
		std::string	get_nick();
		std::string	get_nbr();
		std::string	get_secret();
		void		change_value(std::string value, int i);
		int			check_input();
};

class	PhoneBook
{ 
	public:
		class Contact people[8];
};


std::string	print_menu(void);
Contact		add_person(void);
void		print_person(Contact person, int i);
void		print_full_contact(Contact person);
void		print_value(std::string value);
void		search_person(PhoneBook list, int size);
int			check_for_nbr(std::string input);

# define BANNER \
"    +-+-+-+-+-+-+-+-+-+\n" \
"    |P|h|o|n|e|b|o|o|k|\n" \
"    +-+-+-+-+-+-+-+-+-+"

#endif