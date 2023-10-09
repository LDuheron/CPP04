/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:18:46 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 17:14:59 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructor -----------------------------------------------------------------
	
Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called.\n";
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	std::cout << "Cure copy constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Cure::~Cure()
{
	std::cout << "Cure destructor called.\n";
}

// Overload --------------------------------------------------------------------

Cure &				Cure::operator=( Cure const & rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

// Accessors -------------------------------------------------------------------

// Functions -------------------------------------------------------------------

AMateria* 		Cure::clone() const
{
	return (new Cure());
}

void 			Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds *\n";
}
