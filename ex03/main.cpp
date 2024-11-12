/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:51:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/12 19:33:39 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int	main(void)
{
	std::string target = "target robot";

	DiamondTrap dt("dt-robot");
	std::cout << "DT name: " << dt.getName() << std::endl;
	std::cout << "CT name: " << dt.ScavTrap::getName() << std::endl;
	dt.status();
	dt.whoAmI();

	DiamondTrap dt_copy(dt);
	dt_copy.setName("dt_copy");
	dt_copy.status();
	dt_copy.takeDamage(20);
	dt_copy.status();

	DiamondTrap dt_assignment;
	dt_assignment = dt_copy;
	dt_assignment.status();
	dt_assignment.guardGate();
	dt_assignment.highFivesGuys();
	
	return (0);
}