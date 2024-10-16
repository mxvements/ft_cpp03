/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:52:02 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/16 21:15:08 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <iomanip>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hit_pts; // = 10;
		unsigned int	_energy_pts; // = 10;
		unsigned int	_attack_damage; // = 10;
	
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		//setters and getters
		void setName(std::string name);
		std::string getName(void);
		int getHit(void);
		int getEnergy(void);
		int getAttack(void);
		//member functs
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
} ;

#endif 