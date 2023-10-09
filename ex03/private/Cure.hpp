/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:57:33 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 18:53:53 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure( Cure const & src);
		~Cure();

		Cure &						operator=( Cure const & rhs );

		virtual AMateria* 			clone() const;
		virtual void 				use(ICharacter& target);
};

#endif