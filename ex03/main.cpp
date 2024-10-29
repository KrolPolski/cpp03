/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:21:16 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/29 17:49:43 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    {	
		DiamondTrap anon;
		DiamondTrap copy(anon);
	
		anon.whoAmI();
		anon.printStats();
		anon.attack("Ted");
		copy.HighFivesGuys();
		std::cout << std::endl;
	}
	{	
		DiamondTrap Pretty("Pretty");
		DiamondTrap Hope(Pretty);
		DiamondTrap Lovely;
		Hope.whoAmI();
		Pretty.whoAmI();
		Lovely.whoAmI();
		Lovely = Hope;
		Lovely.whoAmI();
		Pretty.printStats();
		Pretty.attack("Ted");
		Pretty.HighFivesGuys();
		std::cout << std::endl;
	}
}