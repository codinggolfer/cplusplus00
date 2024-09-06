/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:15:31 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/06 19:00:47 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>



class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecter;
public:
	//getter
	std::string getF();
	std::string getL();
	std::string getN();
	std::string getP();
	std::string getD();
	
	//setter
	void setF(std::string str);
	void setL(std::string str);
	void setN(std::string str);
	void setP(std::string str);
	void setD(std::string str);
	//printcontacts
};

#endif