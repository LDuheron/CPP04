/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:56 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 21:23:26 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

std::string	Dog::_defaultType("Dog");

// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `Dog` instance,
 * 			initializing its attributes to ClapTrap default values.
 * 
 * @return	The newly created Dog instance.
 */
Dog::Dog() : Animal(_defaultType)
{
	std::cout << "Dog default constructor called.\n";
}

/**
 * @brief	Construct a new `Dog` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << "Dog copy constructor called.\n";
}

Dog::Dog( std::string str ) : Animal(str)
{
	std::cout << "Dog constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Dog::~Dog()
{
		std::cout << "Dog destructor called.\n";
}

// Overload --------------------------------------------------------------------

Dog &				Dog::operator=( Dog const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

// Accessors --------------------------------------------------------------------

std::string const			&Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::setType(std::string const &type)
{
	this->_type = type;
}

// Functions -------------------------------------------------------------------

void	Dog::makeSound( void ) const
{
	std::cout << this->_type << " : wouf.\n";
}
