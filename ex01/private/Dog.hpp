/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:27 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 15:36:13 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
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