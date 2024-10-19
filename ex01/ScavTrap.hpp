/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:18:14 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/19 17:18:39 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ClapTrap.hpp"

/**
 * ScavTrap inherits from ClapTrap
 * however, construtors, destructor and attack() print different messages
 */

class ScavTrap: public ClapTrap
{
	private:
	
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);

		std::string getClassName(void);
		void attack(const std::string &target);
		void guardGate(void);
} ;

#endif
