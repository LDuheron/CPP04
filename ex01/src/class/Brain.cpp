/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:56:01 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 00:20:32 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructor -----------------------------------------------------------------

Brain::Brain()
{
	std::cout << "Brain default constructor called.\n";
	// for (int i = 0; i < 100; i++)
	// 	ideas[i] = "GENIUS THOUGHT.\n";
}

Brain::Brain( const Brain & src ) : ideas(src.ideas)
{
	std::cout << "Brain copy constructor called.\n";
	// for (int i = 0; i < 100; i++)
	// 	ideas[i] = src.ideas[i];
}

Brain::Brain( std::string str ) : ideas(str)
{
	std::cout << "Brain constructor called.\n";
	// for (int i = 0; i < 100; i++)
	// 	ideas[i] = str;
}

// Destructor ------------------------------------------------------------------

Brain::~Brain()
{
		std::cout << "Brain destructor called.\n";
}

// Overload --------------------------------------------------------------------

Brain &				Brain::operator=( Brain const & rhs )
{
	this->ideas = rhs.ideas;
	return *this;
}

// Accessors --------------------------------------------------------------------

