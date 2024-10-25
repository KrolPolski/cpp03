/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:50:25 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/25 17:03:01 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
class ClapTrap
{
	private:
		std::string _name;
		int			_HP;
		int			_EP;
		int			_attackDamage;
	public:
		ClapTrap(std::string _name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


