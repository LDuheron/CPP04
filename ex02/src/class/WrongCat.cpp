/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:48 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 23:01:20 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

std::string	WrongCat::_defaultType("WrongCat");

// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `WrongCat` instance,
 * 			initializing its attributes to ClapTrap default values.
 * 
 * @return	The newly created WrongCat instance.
 */
WrongCat::WrongCat() : WrongAnimal(WrongCat::_defaultType)
{
	std::cout << "WrongCat default constructor called.\n";
}

/**
 * @brief	Construct a new `WrongCat` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal( src )
{
	std::cout << "WrongCat copy constructor called.\n";
}

WrongCat::WrongCat( std::string str ) : WrongAnimal ( str )
{
	std::cout << "WrongCat constructor called.\n";
}

// Destructor ------------------------------------------------------------------

WrongCat::~WrongCat()
{
		std::cout << "WrongCat destructor called.\n";
}

// Overload --------------------------------------------------------------------

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

// Accessors --------------------------------------------------------------------

std::string const			&WrongCat::getType(void) const
{
	return (this->_type);
}

void	WrongCat::setType(std::string const &type)
{
	this->_type = type;
}

// Functions -------------------------------------------------------------------

void	WrongCat::makeSound( void ) const
{
	std::cout << this->_type << " : Wouf.\n";
}
