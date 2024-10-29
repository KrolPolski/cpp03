/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:38:37 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/29 14:49:37 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string _name);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);
		void whoAmI();
		void attack(const std::string& target) override;
		void printStats();
		~DiamondTrap();
};

