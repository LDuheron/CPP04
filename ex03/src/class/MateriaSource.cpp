/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:22:44 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 21:13:38 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Constructor -----------------------------------------------------------------
MateriaSource::MateriaSource() : _cauldron()
{
	std::cout << "MateriaSource constructor called\n";
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "Copy MateriaSource constructor called.\n";
	for (int i = 0 ; i < 4; i++)
	{
		if (src._cauldron[i])
			this->_cauldron[i] = src._cauldron[i]->clone();
	}
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
		for (int i = 0 ; i < 4; i++)
		{
			if (this->_cauldron[i])
			{
				delete this->_cauldron[i];
				this->_cauldron[i] = NULL;
			}
			if (rhs._cauldron[i])
				this->_cauldron[i] = rhs._cauldron[i]->clone();
		}
	}
	return *this;
}

// Functions -------------------------------------------------------------------
void 	MateriaSource::learnMateria(AMateria* src)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_cauldron[i])
		{
			this->_cauldron[i] = src;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_cauldron[i]->getType() == type)
			return (this->_cauldron[i]->clone());
	}
	return (0);
}
