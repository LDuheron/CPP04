/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:48:14 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 21:12:23 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructor -----------------------------------------------------------------

Character::Character() : _name("Jo"), _inventory(), _cpt_inventory(0)
{
	std::cout << "Character constructor called.\n";
}

Character::Character(std::string str) : _name(str), _inventory(), _cpt_inventory(0)
{
	std::cout << "Character name constructor called.\n";
}

Character::Character(Character const & src) : _name(src._name), _inventory(), _cpt_inventory(src._cpt_inventory)
{
	for (int i = 0 ; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
	std::cout << "Copy character constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Character::~Character()
{
	for (int i = 0 ; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character destructor called.\n";
}

// Overload --------------------------------------------------------------------

Character &				Character::operator=( Character const & rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_cpt_inventory = rhs._cpt_inventory;
		for (int i = 0 ; i < 4; i++)
		{
			if (this->_inventory[i])
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

// Functions -------------------------------------------------------------------

std::string const & Character::getName() const
{
	return(this->_name);
}

void 				Character::equip(AMateria* m)
{
	if (this->_cpt_inventory == 4)
		std::cerr << "Inventory is full.\n";
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_inventory[i])
			{
				this->_inventory[i] = m;
				break;
			}
		}
		this->_cpt_inventory++;
	}
}

void 				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		this->_inventory[idx] = NULL;
		this->_cpt_inventory -= 1;
	}
	else
		std::cerr << "Nothing to unequip here !\n";
}

void 				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
