/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:21:16 by rboudwin          #+#    #+#             */
/*   Updated: 2024/10/26 14:53:07 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap anon;
    ClapTrap Clint("Clint");
    ClapTrap Eastwood = Clint;
    
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
    
}