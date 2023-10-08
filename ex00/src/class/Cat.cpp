/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:48 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 18:49:43 by lduheron         ###   ########.fr       */
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
Cat::Cat() : _type(_defaultType)
{
	std::cout << "Cat default constructor called.\n";
}

/**
 * @brief	Construct a new `Cat` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
Cat::Cat( const Cat & src ) : _type(src._type)
{
	std::cout << "Cat copy constructor called.\n";
}

Cat::Cat( std::string str ) : _type(str)
{
	std::cout << "Cat constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Cat::~Cat()
{
		std::cout << "Cat destructor called.\n";
}

// Accessors -------------------------------------------------------------------

// Overload --------------------------------------------------------------------

Cat &				Cat::operator=( Cat const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

// std::ostream &			operator<<( std::ostream & lhs, Cat const & rhs )
// {
// 	lhs << ;
// 	return lhs;
// }

// Functions -------------------------------------------------------------------

void	Cat::makeSound( void )
{
	std::cout << this->_type << " : miaou.\n";
}
