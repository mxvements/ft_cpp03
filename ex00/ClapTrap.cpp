/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:51:33 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/16 21:16:33 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_hit_pts(10), _energy_pts(10), _attack_damage(10)
{
	this->_name = name;
}
ClapTrap::~ClapTrap(void){}

//setters and getters
void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

std::string ClapTrap::getName(void)
{
	return this->_name;
}

int ClapTrap::getHit(void)
{
	return this->_hit_pts;
}

int ClapTrap::getEnergy(void)
{
	return this->_energy_pts;
}

int ClapTrap::getAttack(void)
{
	return this->_attack_damage;
}


//member functs

/**
 * when a claptrap attacks
 * it causes its target to lose <attack damage> hit points
 * it costs 1 energy point
 */
void ClapTrap::attack(const std::string &target)
{
	(void)target;
	std::cout << "<name> attacks , causing <damage< points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	(void)amount;
	std::cout << "<name> taked <damage> of damage" << std::endl;
}

/**
 * when a claptrap repairs itself, it gets <amount> hit points back
 * it costs 1 energy point
 */
void ClapTrap::beRepaired(unsigned int amount)
{
	(void)amount;
	std::cout << "<name> reapirs itself <amount>" << std::endl;
}
