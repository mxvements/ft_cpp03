/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:13:31 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/19 21:29:16 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << this->getClassName() << ": Constuctor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << this->getClassName() << ": Constuctor called" << std::endl;
	this->_name = name;
	FragTrap::setHitPts(100);
	ScavTrap::setEnergyPts(50);
	FragTrap::setAttackDamage(30);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
	: ClapTrap(src._name + "_clap_name"), ScavTrap(src._name), FragTrap(src._name)
{
	std::cout << this->getClassName() << ": Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << this->getClassName() << ": Assginment overload called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		ClapTrap::setName(src._name + "_clap_name");
		FragTrap::setHitPts( src._hit_pts );
		ScavTrap::setEnergyPts(src._energy_pts);
		FragTrap::setAttackDamage(src._attack_damage);
	}
	return *this;
}

void DiamondTrap::setName(std::string name)
{
	this->_name = name;
}

std::string DiamondTrap::getName(void)
{
	return (this->_name);
}

std::string DiamondTrap::getClassName(void)
{
	return ("DiamondTrap");
}