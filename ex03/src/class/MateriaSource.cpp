/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:22:44 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 19:45:04 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

// Constructor -----------------------------------------------------------------
MateriaSource::MateriaSource(MateriaSource const & src) : MateriaSource()
{
	std::cout << "Copy MateriaSource constructor called.\n";
}

// Destructor ------------------------------------------------------------------
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called.\n";
}

// Overload --------------------------------------------------------------------
MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

// Functions -------------------------------------------------------------------
void 	IMateriaSource::learnMateria(AMateria*)
{
	
}

AMateria* IMateriaSource::createMateria(std::string const & type)
{
	
}