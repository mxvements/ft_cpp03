/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:51:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/12 18:22:51 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string target = "target robot";
	
	ClapTrap claptrap("robot");
	claptrap.attack(target);
	claptrap.status();
	claptrap.takeDamage(5);
	claptrap.status();
	claptrap.takeDamage(6);
	claptrap.status();
	claptrap.beRepaired(2);
	claptrap.status();
	claptrap.attack("target");
	claptrap.status();

	ClapTrap ft_assign;
	ft_assign = claptrap;
	ft_assign.setName("robot_assign");
	ft_assign.status();
	ft_assign.takeDamage(3);
	ft_assign.status();
	claptrap.status();

	ClapTrap ft_copy = ft_assign;
	ft_copy.setName("cp_copy");
	ft_copy.status();
	
	return (0);
}