/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:51:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/19 17:18:28 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap claptrap("cp-robot");
	std::string target = "target robot";

	claptrap.status();
	claptrap.attack(target);
	claptrap.status();
	claptrap.takeDamage(5);
	claptrap.status();
	claptrap.takeDamage(6);
	claptrap.status();
	claptrap.beRepaired(2);
	claptrap.status();

	ScavTrap scavtrap("st-robot");

	scavtrap.status();
	scavtrap.attack(target);
	scavtrap.status();
	scavtrap.takeDamage(5);
	scavtrap.status();
	scavtrap.takeDamage(6);
	scavtrap.status();
	scavtrap.beRepaired(2);
	scavtrap.status();
	
	return (0);
}