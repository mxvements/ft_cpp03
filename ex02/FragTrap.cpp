/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:02:09 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/19 21:36:14 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << this->getClassName() << ": Copy constructor called" << std::endl;
	*this  = src;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << this->getClassName() << ": Assignment overload called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hit_pts = src._hit_pts;
		this->_energy_pts = src._energy_pts;
		this->_attack_damage = src._attack_damage;
	}
	return *this;
}

std::string FragTrap::getClassName(void)
{
	return ("FragTrap");	
}

void FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW << "High fives request!" << RESET << std::endl;
}
