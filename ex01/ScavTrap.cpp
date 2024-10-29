/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:20:15 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/29 17:27:42 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("TheRobotWithNoName")
{
	this->_name = "TheRobotWithNoName"; 
    _HP = 100;
    _EP = 50;
    _attackDamage = 20;
	std::cout << "ScavTrap default constructor called on " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name; 
    _HP = 100;
    _EP = 50;
    _attackDamage = 20;
	std::cout << "ScavTrap constructor called on " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
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

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
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

void ScavTrap::attack(const std::string& target)
{
	if (_HP > 0 && _EP > 0)
    {
        _EP--;
        std::cout << "ScavTrap " << _name << " attacks " << target << " causing " 
            << _attackDamage << " points of damage!" << std::endl;
    }
    else if (_HP <= 0)
    {
        std::cout << "ScavTrap " << _name << " failed to attack because it has " << _HP 
            << " hit points." << std::endl;
    }
    else if (_EP <= 0)
    {
        std::cout << "ScavTrap " << _name << " failed to attack because it has " << _HP 
            << " energy points." << std::endl;
    }
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called on " << this->_name << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode." << std::endl;
}