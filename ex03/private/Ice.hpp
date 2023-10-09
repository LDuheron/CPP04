/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:06:48 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 18:53:54 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class AMateria;

class Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice( const Ice & src);
		~Ice();

		Ice &					operator=( Ice const & rhs );

		virtual AMateria* 		clone() const;
		virtual void 			use(ICharacter& target);
};

#endif