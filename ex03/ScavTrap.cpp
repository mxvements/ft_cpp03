/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:18:11 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/19 20:56:14 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	std::cout << this->getClassName() << ": Copy construcctor called" << std::endl;
	*this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << this->getClassName() << ": Assignment overload called" << std::endl;
	if (this != &scavtrap)
	{
		this->_name = scavtrap._name;
		this->_hit_pts = scavtrap._hit_pts;
		this->_energy_pts = scavtrap._energy_pts;
		this->_attack_damage = scavtrap._attack_damage;
	}
	return *this;
}

std::string ScavTrap::getClassName(void) { return ("ScavTrap"); }

void ScavTrap::attack(const std::string &target)
{
	if (this->_hit_pts == 0 || this->_energy_pts == 0)
	{
		std::cout << this->_name << " is no longer able to attack" << std::endl;
		return;
	}
	this->_energy_pts -= 1;
	std::cout << ORANGE
			  << this->_name
			  << " attacks "
			  << target
			  << ", causing "
			  << this->_attack_damage
			  << " points of damage"
			  << RESET << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << YELLOW
			  << this->_name
			  << " is now in guard gate mode"
			  << RESET << std::endl;
}
