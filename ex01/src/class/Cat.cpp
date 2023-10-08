/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:48 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 23:32:26 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

std::string	Cat::_defaultType("Cat");

// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `Cat` instance,
 * 			initializing its attributes to ClapTrap default values.
 * 
 * @return	The newly created Cat instance.
 */
Cat::Cat() : Animal(_defaultType)
{
	std::cout << "Cat default constructor called.\n";
}

/**
 * @brief	Construct a new `Cat` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
Cat::Cat( const Cat & src ) : Animal( src )
{
	std::cout << "Cat copy constructor called.\n";
}

Cat::Cat( std::string str ) : Animal ( str )
{
	std::cout << "Cat constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Cat::~Cat()
{
		std::cout << "Cat destructor called.\n";
}

// Overload --------------------------------------------------------------------

Cat &				Cat::operator=( Cat const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

// Accessors --------------------------------------------------------------------

std::string const			&Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::setType(std::string const &type)
{
	this->_type = type;
}

// Functions -------------------------------------------------------------------

void	Cat::makeSound( void ) const
{
	std::cout << this->_type << " : miaou.\n";
}
