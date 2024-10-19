/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:51:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/19 19:04:34 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string target = "target robot";
	
	ScavTrap scavtrap("st-robot");
	scavtrap.status();
	scavtrap.attack(target);
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(2);
	scavtrap.status();

	ScavTrap st_assing;
	st_assing = scavtrap;
	st_assing.status();
	st_assing.takeDamage(7);
	st_assing.guardGate();
	st_assing.beRepaired(3);
	st_assing.status();

	ScavTrap st_copy(st_assing);
	st_copy.status();

	return (0);
}