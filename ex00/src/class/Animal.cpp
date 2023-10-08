/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:38 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 18:27:23 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string	Animal::_defaultType("Dino");

// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `Animal` instance,
 * 			initializing its attributes to ClapTrap default values.
 * 
 * @return	The newly created Animal instance.
 */
Animal::Animal() : _type(_defaultType)
{
	std::cout << "Animal default constructor called.\n";
}

/**
 * @brief	Construct a new `Animal` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
Animal::Animal( const Animal & src ) : _type(src._type)
{
	std::cout << "Animal copy constructor called.\n";
}

Animal::Animal( std::string str ) : _type(str)
{
	std::cout << "Animal constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Animal::~Animal()
{
		std::cout << "Animal destructor called.\n";
}

// Accessors -------------------------------------------------------------------

// Overload --------------------------------------------------------------------

// Animal &				Animal::operator=( Animal const & rhs )
// {
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & lhs, Animal const & rhs )
// {
// 	lhs << ;
// 	return lhs;
// }

// Functions -------------------------------------------------------------------
