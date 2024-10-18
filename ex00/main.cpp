/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:51:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/18 20:06:37 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap claptrap("robot");
	std::string target = "target robot";

	claptrap.attack(target);
	claptrap.status();
	claptrap.takeDamage(5);
	claptrap.status();
	claptrap.takeDamage(6);
	claptrap.status();
	claptrap.beRepaired(2);
	claptrap.status();
	
	return (0);
}