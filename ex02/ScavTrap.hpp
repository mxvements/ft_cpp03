/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:18:14 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/19 21:36:29 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

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
		ScavTrap(const ScavTrap &src);
		ScavTrap &operator=(const ScavTrap &src);

		std::string getClassName(void);
		void attack(const std::string &target);
		void guardGate(void);
} ;

#endif
