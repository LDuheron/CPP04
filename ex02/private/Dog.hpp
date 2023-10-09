/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:27 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 15:52:53 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		static std::string		_defaultType;
		Brain					*_brain;

	public:

		Dog();
		Dog( Dog const & src );
		Dog( std::string str );
		virtual ~Dog();

		Dog &					operator=( Dog const & rhs );

		std::string const		&getType(void) const;
		void					setType(std::string const &type);

		virtual void			makeSound( void ) const;

};

#endif