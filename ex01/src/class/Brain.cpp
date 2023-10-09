/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:56:01 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 14:20:09 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructor -----------------------------------------------------------------

Brain::Brain()
{
	std::cout << "Brain default constructor called.\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "GENIUS THOUGHT.\n";
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain copy constructor called.\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain::Brain( std::string str )
{
	std::cout << "Brain constructor called.\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = str;
}

// Destructor ------------------------------------------------------------------

Brain::~Brain()
{
		std::cout << "Brain destructor called.\n";
}

// Overload --------------------------------------------------------------------

Brain &				Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

// Accessors --------------------------------------------------------------------

