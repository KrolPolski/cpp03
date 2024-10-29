/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:40:55 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/29 14:03:45 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "TheFragWithNoName"; 
    _HP = 100;
    _EP = 100;
    _attackDamage = 30;
	std::cout << "FragTrap default constructor called on " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name; 
    _HP = 100;
    _EP = 100;
    _attackDamage = 30;
	std::cout << "FragTrap constructor called on " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
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

FragTrap& FragTrap::operator=(const FragTrap& other)
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

void FragTrap::attack(const std::string& target)
{
	if (_HP > 0 && _EP > 0)
    {
        _EP--;
        std::cout << "FragTrap " << _name << " attacks " << target << " causing " 
            << _attackDamage << " points of damage!" << std::endl;
    }
    else if (_HP <= 0)
    {
        std::cout << "FragTrap " << _name << " failed to attack because it has " << _HP 
            << " hit points." << std::endl;
    }
    else if (_EP <= 0)
    {
        std::cout << "FragTrap " << _name << " failed to attack because it has " << _HP 
            << " energy points." << std::endl;
    }
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called on " << this->_name << std::endl;
}

void FragTrap::HighFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requests high fives from everyone!" << std::endl;
}