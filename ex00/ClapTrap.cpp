/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:54:52 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/26 14:51:58 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if (_HP > 0 && _EP > 0)
    {
        _EP--;
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " 
            << _attackDamage << " points of damage!" << std::endl;
    }
    else if (_HP <= 0)
    {
        std::cout << "ClapTrap failed to attack because it has " << _HP 
            << " hit points." << std::endl;
    }
    else if (_EP <= 0)
    {
        std::cout << "ClapTrap failed to attack because it has " << _HP 
            << " energy points." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _HP -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!"
        << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_EP > 0 && _HP > 0)
    {
        _HP += amount;
        _EP--;
	    std::cout << "ClapTrap " << _name << " is repaired for " << amount << "points of damage!"
            << std::endl;
    } 
    else if (_HP <= 0)
    {
        std::cout << "ClapTrap failed to repair because it has " << _HP 
            << " hit points." << std::endl;
    }
    else if (_EP <= 0)
    {
        std::cout << "ClapTrap failed to repair because it has " << _HP 
            << " energy points." << std::endl;
    }
}

ClapTrap::ClapTrap()
{
    this->_name = "TheManWithNoName"; 
    _HP = 10;
    _EP = 10;
    _attackDamage = 0;
	std::cout << "ClapTrap default constructor called on " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    this->_name = _name; 
    _HP = 10;
    _EP = 10;
    _attackDamage = 0;
	std::cout << "ClapTrap constructor called on " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
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

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called on " << this->_name << std::endl;
}