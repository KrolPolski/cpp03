/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:40:55 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/28 11:50:36 by rboudwin         ###   ########.fr       */
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called on " << this->_name << std::endl;
}

void FragTrap::HighFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requests high fives from everyone!" << std::endl;
}