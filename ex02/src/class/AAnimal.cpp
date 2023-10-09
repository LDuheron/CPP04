/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:38 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 22:06:31 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

std::string	AAnimal::_defaultType("Dino");

// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `AAnimal` instance,
 * 			initializing its attributes to ClapTrap default values.
 * 
 * @return	The newly created AAnimal instance.
 */
AAnimal::AAnimal() : _type(_defaultType)
{
	std::cout << "AAnimal default constructor called.\n";
}

/**
 * @brief	Construct a new `AAnimal` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
AAnimal::AAnimal( const AAnimal & src ) : _type(src._type)
{
	std::cout << "AAnimal copy constructor called.\n";
}

AAnimal::AAnimal( std::string str ) : _type(str)
{
	std::cout << "AAnimal constructor called.\n";
}

// Destructor ------------------------------------------------------------------

AAnimal::~AAnimal()
{
		std::cout << "AAnimal destructor called.\n";
}

// Overload --------------------------------------------------------------------

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

// Accessors -------------------------------------------------------------------
std::string const			&AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string const &type)
{
	this->_type = type;
}

// Functions -------------------------------------------------------------------

