/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:21:16 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/29 16:47:56 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap anon;
	
	{
		anon.whoAmI();
		anon.printStats();
		anon.attack("Ted");
		std::cout << std::endl;
	}
	{	
		DiamondTrap Pretty("Pretty");	
		Pretty.whoAmI();
		Pretty.printStats();
		Pretty.attack("Ted");
		Pretty.HighFivesGuys();
		std::cout << std::endl;
	}
}