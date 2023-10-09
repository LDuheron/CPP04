/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:45:36 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 21:07:29 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_inventory[4];
		int				_cpt_inventory;
		

	public:
		Character();
		Character(Character const & src);
		Character(std::string str);
		virtual ~Character();
	
		Character &		operator=( Character const & rhs );

		virtual std::string const & getName() const;
		virtual void 				equip(AMateria* m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter& target);
};

#endif
