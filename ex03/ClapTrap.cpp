/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:51:33 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/12 19:06:13 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_hit_pts = 10;
	this->_energy_pts = 10;
	this->_attack_damage = 0;
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hit_pts(10), _energy_pts(10), _attack_damage(0)
{
	this->_name = name;
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
}
ClapTrap::~ClapTrap(void)
{
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

/**
 * copy constructor
 * ClapTrap b(a)
 *
 * initilized b, copying a into b
 */
ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << this->getClassName() << ": Copy construcctor called" << std::endl;
	*this = claptrap;
}

/**
 * Overload Assignment
 * b = a
 *
 * both are initialized
 * copies a into b
 */
ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << this->getClassName() << ": Assignment overload called" << std::endl;
	if (this != &claptrap)
	{
		this->_name = claptrap._name;
		this->_hit_pts = claptrap._hit_pts;
		this->_energy_pts = claptrap._energy_pts;
		this->_attack_damage = claptrap._attack_damage;
	}
	return *this;
}

// setters and getters

void ClapTrap::setName(std::string name) { this->_name = name; }

void ClapTrap::setHitPts(unsigned int amount) { this->_hit_pts = amount; }

void ClapTrap::setEnergyPts(unsigned int amount) { this->_energy_pts = amount; }

void ClapTrap::setAttackDamage(unsigned int amount) { this->_attack_damage = amount; }

std::string ClapTrap::getName(void) { return this->_name; }

int ClapTrap::getHitPts(void) { return this->_hit_pts; }

int ClapTrap::getEnergyPts(void) { return this->_energy_pts; }

int ClapTrap::getAttackDamage(void) { return this->_attack_damage; }

std::string ClapTrap::getClassName(void) { return ("ClapTrap"); }
// member functs

/**
 * when a claptrap attacks
 * it causes its target to lose <attack damage> hit points
 * it costs 1 energy point
 */
void ClapTrap::attack(const std::string &target)
{
	if (this->_hit_pts == 0 || this->_energy_pts == 0)
	{
		std::cout << this->_name << " is no longer able to attack" << std::endl;
		return;
	}
	this->_energy_pts -= 1;
	std::cout << ORANGE
			  << "ScavTrap "
			  << this->_name
			  << " attacks "
			  << target
			  << ", causing "
			  << this->_attack_damage
			  << " points of damage"
			  << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_pts == 0)
	{
		std::cout << this->_name << "is already dead" << std::endl;
		return ;
	}
	else if (amount >= this->_hit_pts)
		this->_hit_pts = 0;
	else
		this->_hit_pts -= amount;
	std::cout << RED
			  << this->_name
			  << " took "
			  << amount
			  << " points of damage"
			  << RESET << std::endl;
}

/**
 * when a claptrap repairs itself, it gets <amount> hit points back
 * it costs 1 energy point
 */
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_pts == 0)
	{
		std::cout << this->_name << " is no longer able to be repaired" << std::endl;
		return;
	}
	this->_hit_pts += amount;
	this->_energy_pts -= 1;
	std::cout << GREEN
			  << this->_name
			  << " repaired itself "
			  << amount
			  << " of hit points"
			  << RESET << std::endl;
}

void ClapTrap::status(void)
{
	std::cout << CYAN
			  << this->_name << "\n"
			  << "\thit points: " << this->_hit_pts << "\n"
			  << "\tenergy points:" << this->_energy_pts << "\n"
			  << "\tattack damage: " << this->_attack_damage << "\n"
			  << RESET << std::endl;
}
