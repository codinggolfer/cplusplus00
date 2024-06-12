/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:07:50 by eagbomei          #+#    #+#             */
/*   Updated: 2024/06/12 15:07:01 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	std::string	str;
	
	if (ac > 1)
	{
		for (int i = 1; av[i] != '\0'; i++)
		{
			str = av[i];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
	return (0);
}