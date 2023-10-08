/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:38 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 23:43:29 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string	WrongAnimal::_defaultType("Wrong Dino");

// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `WrongAnimal` instance,
 * 			initializing its attributes to ClapTrap default values.
 * 
 * @return	The newly created WrongAnimal instance.
 */
WrongAnimal::WrongAnimal() : _type(_defaultType)
{
	std::cout << "WrongAnimal default constructor called.\n";
}

/**
 * @brief	Construct a new `WrongAnimal` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
WrongAnimal::WrongAnimal( const WrongAnimal & src ) : _type(src._type)
{
	std::cout << "WrongAnimal copy constructor called.\n";
}

WrongAnimal::WrongAnimal( std::string str ) : _type(str)
{
	std::cout << "WrongAnimal constructor called.\n";
}

// Destructor ------------------------------------------------------------------

WrongAnimal::~WrongAnimal()
{
		std::cout << "WrongAnimal destructor called.\n";
}

// Overload --------------------------------------------------------------------

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

// Accessors -------------------------------------------------------------------
std::string const			&WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string const &type)
{
	this->_type = type;
}

// Functions -------------------------------------------------------------------

void	WrongAnimal::makeSound( void ) const
{
	std::cout << this->_type << " : RRRRRRRRRRRRROOOOOOOOOOOAR.\n";
}
