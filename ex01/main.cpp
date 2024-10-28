/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:21:16 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/28 10:42:42 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap anon;
    ClapTrap Clint("Clint");
    ClapTrap Eastwood = Clint;
	ScavTrap robot("Mr. Robot");
	ScavTrap anon_robot;
	
    Clint.attack("TheManWithNoName");
    anon.attack("Clint");
    Clint.takeDamage(10);
    Clint.attack("TheManWithNoName");
    anon.attack("Clint");
    anon.attack("Clint");
    anon.attack("Clint");
    anon.attack("Clint");
    anon.attack("Clint");
    anon.attack("Clint");
    anon.attack("Clint");
    anon.attack("Clint");
    anon.attack("Clint");
    anon.attack("Clint");	
	robot.guardGate();
	robot.attack("Clint");
	Clint.takeDamage(20);
	Clint.attack("Mr. Robot");
}