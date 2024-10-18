/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:18:14 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/18 20:31:00 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPP_HPP
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
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);
} ;

#endif
