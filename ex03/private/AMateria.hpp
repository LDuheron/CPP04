/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:02:56 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 18:53:50 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string				_type;

	public:
		AMateria();
		AMateria(AMateria const & src);
		AMateria(std::string const & type);
		~AMateria();

		AMateria &				operator=( AMateria const & rhs );

		std::string const & 	getType() const; //Returns the materia type
		
		virtual AMateria* 		clone() const = 0;
		virtual void 			use(ICharacter& target);
};

std::ostream &		operator<<(std::ostream & lhs, AMateria const & rhs );

#endif
