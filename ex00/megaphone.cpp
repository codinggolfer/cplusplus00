/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:07:50 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/16 09:59:35 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	std::string	str;
	size_t lenght = 0;
	if (ac > 1)
	{
		for (int i = 1; av[i] != NULL; i++)
		{
			str = av[i];
			lenght = str.length();
			for(size_t j = 0; j < lenght; j++)
				str[j] = std::toupper(str[j]);
			std::cout << str;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}