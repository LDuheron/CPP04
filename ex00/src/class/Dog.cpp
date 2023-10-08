/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:56 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 18:27:03 by lduheron         ###   ########.fr       */
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

// Accessors -------------------------------------------------------------------

// Overload --------------------------------------------------------------------

// Dog &				Dog::operator=( Dog const & rhs )
// {
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & lhs, Dog const & rhs )
// {
// 	lhs << ;
// 	return lhs;
// }

// Functions -------------------------------------------------------------------
