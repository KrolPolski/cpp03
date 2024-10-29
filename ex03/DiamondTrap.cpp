/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:41:52 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/29 17:47:53 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :  ClapTrap("TheDiamondWithNoName_clap_name"), ScavTrap("TheDiamondWithNoName"), FragTrap("TheDiamondWithNoName") 
{
	this->_name = "TheDiamondWithNoName"; 
    _EP = 50;
	
	std::cout << "DiamondTrap default constructor called on " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
    _EP = 50;
	std::cout << "DiamondTrap constructor called on " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other._name + "_clap_name"), ScavTrap(other._name), FragTrap(other._name)
{
	if (this != &other)
    {
        _name = other._name;
        _HP = other._HP;
        _EP = other._EP;
        _attackDamage = other._attackDamage;
    }
    std::cout << "Copy constructor called on " << this->_name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
    {
        _name = other._name;
        _HP = other._HP;
        _EP = other._EP;
        _attackDamage = other._attackDamage;
    }
    std::cout << "Copy assignment constructor called on " << this->_name << std::endl;
    return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My Diamond name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}

void DiamondTrap::printStats()
{
	std::cout << _name << " HP: " << this->DiamondTrap::_HP << " EP: " << this->DiamondTrap::_EP << " Attack Damage: " << this->DiamondTrap::_attackDamage << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called on " << this->_name << std::endl;
}
