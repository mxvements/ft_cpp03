/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:51:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/19 18:54:32 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main(void)
{
	std::string target = "target robot";

	FragTrap fragtrap("ft-robot");
	fragtrap.status();
	fragtrap.attack(target);
	fragtrap.status();
	fragtrap.takeDamage(5);
	fragtrap.status();
	fragtrap.beRepaired(2);
	fragtrap.status();

	FragTrap ft_copy(fragtrap);
	ft_copy.status();
	ft_copy.beRepaired(10);
	ft_copy.status();
	
	FragTrap ft_assign;
	ft_assign = ft_copy;
	ft_assign.status();
	ft_assign.takeDamage(6);
	ft_assign.status();
	
	return (0);
}