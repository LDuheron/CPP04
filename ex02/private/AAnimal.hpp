/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:17 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 15:52:13 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	private:
		static std::string		_defaultType;	

	protected:
		std::string				_type;

	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		AAnimal( std::string str );
		virtual ~AAnimal();

		AAnimal &				operator=( AAnimal const & rhs );

		std::string const		&getType(void) const;
		void					setType(std::string const &type);

		virtual void			makeSound( void ) const = 0;

};

#endif