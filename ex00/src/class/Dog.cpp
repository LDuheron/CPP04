/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:56 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 18:56:35 by lduheron         ###   ########.fr       */
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
Dog::Dog() : _type(_defaultType)
{
	std::cout << "Dog default constructor called.\n";
}

/**
 * @brief	Construct a new `Dog` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
Dog::Dog( const Dog & src ) : _type(src._type)
{
	std::cout << "Dog copy constructor called.\n";
}

Dog::Dog( std::string str ) : _type(str)
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

// Functions -------------------------------------------------------------------

void	Dog::makeSound( void )
{
	std::cout << this->_type << " : wouf.\n";
}
