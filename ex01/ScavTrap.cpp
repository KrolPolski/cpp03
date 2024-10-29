/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:20:15 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/29 12:33:27 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "TheRobotWithNoName"; 
    _HP = 100;
    _EP = 50;
    _attackDamage = 20;
	std::cout << "ScavTrap default constructor called on " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called on " << this->_name << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode." << std::endl;
}