/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:21:16 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/28 11:51:30 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap anon;
	FragTrap Clint("Clint");

	anon.HighFivesGuys();
	Clint.HighFivesGuys();
	Clint.attack("TheFragWithNoName");
	anon.takeDamage(30);
	anon.attack("Clint");
	Clint.takeDamage(30);
	Clint.attack("TheFragWithNoName");
	anon.takeDamage(30);
	anon.attack("Clint");
	Clint.takeDamage(30);
	Clint.attack("TheFragWithNoName");
	anon.takeDamage(30);
	anon.attack("Clint");
	Clint.takeDamage(30);
	Clint.attack("TheFragWithNoName");
	anon.takeDamage(30);
	anon.attack("Clint");
}