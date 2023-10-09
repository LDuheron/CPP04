/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:48 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 15:52:53 by lduheron         ###   ########.fr       */
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
Cat::Cat() : AAnimal(_defaultType)
{
	std::cout << "Cat default constructor called.\n";
	this->_brain = new Brain;
}

/**
 * @brief	Construct a new `Cat` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
Cat::Cat( const Cat & src ) : AAnimal( src )
{
	std::cout << "Cat copy constructor called.\n";
	this->_brain = new Brain;
}

Cat::Cat( std::string str ) : AAnimal ( str )
{
	std::cout << "Cat constructor called.\n";
	this->_brain = new Brain;
}

// Destructor ------------------------------------------------------------------

Cat::~Cat()
{
		std::cout << "Cat destructor called.\n";
		delete this->_brain;
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
