/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:51:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/19 19:11:51 by luciama2         ###   ########.fr       */
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

	ScavTrap st_assign;
	st_assign = scavtrap;
	st_assign.status();
	st_assign.takeDamage(7);
	st_assign.guardGate();
	st_assign.beRepaired(3);
	st_assign.status();

	ScavTrap st_copy(st_assign);
	st_copy.status();

	return (0);
}