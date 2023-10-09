/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:06:32 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 21:11:55 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class IMateriaSource;

class MateriaSource : public IMateriaSource
{
	private :
		AMateria	*_cauldron[4];

	public :
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();
	
		MateriaSource &		operator=( MateriaSource const & rhs );

		void 				learnMateria(AMateria* src);
		AMateria* 			createMateria(std::string const & type);

};

#endif