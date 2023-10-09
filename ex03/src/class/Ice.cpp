/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:18:46 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 19:50:05 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructor -----------------------------------------------------------------
	
Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called.\n";
}

Ice::Ice( const Ice & src) : AMateria(src)
{
	std::cout << "Ice copy constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Ice::~Ice()
{
	std::cout << "Ice destructor called.\n";
}

// Overload --------------------------------------------------------------------

Ice &				Ice::operator=( Ice const & rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

// Accessors -------------------------------------------------------------------

// Functions -------------------------------------------------------------------

AMateria* 		Ice::clone() const
{
	return (new Ice());
}

void 			Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << "*\n";
}
