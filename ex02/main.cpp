/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:34:02 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 17:52:04 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	ClapTrap * clappy = new FragTrap("fraggy");
	(*clappy).attack("gd");
	// FragTrap a( "Frag" );
	// a.status();
	// a.attack( "Dummy" );
	// a.beRepaired(5);
	// a.takeDamage(5);
	// a.highFivesGuys();
}
