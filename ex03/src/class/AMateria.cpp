/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:17:07 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 18:38:24 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructor -----------------------------------------------------------------
	
AMateria::AMateria() : _type("Fire")
{
	std::cout << "AMateria default constructor called.\n";
}

AMateria::AMateria(AMateria const & src) : _type(src._type)
{
	std::cout << "AMateria copy constructor called.\n";
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria type constructor called.\n";
}

// Destructor ------------------------------------------------------------------

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called";
}

// Overload --------------------------------------------------------------------

AMateria&				AMateria::operator=( AMateria const & rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::ostream &		operator<<(std::ostream & lhs, AMateria const & rhs )
{
	lhs << rhs.getType();
	return (lhs);
}

// Accessors -------------------------------------------------------------------
std::string const & 	AMateria::getType() const
{
	return (this->_type);
}


// Functions -------------------------------------------------------------------

void 			AMateria::use(ICharacter& target)
{
	std::cout << "* Throw fire at " << target << "*\n";
}
