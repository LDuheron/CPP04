/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:17 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 18:25:33 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	private:
		static std::string	_defaultType;	

	protected:
		std::string _type;

	public:

		Animal();
		Animal( Animal const & src );
		Animal( std::string str );
		~Animal();

		Animal &		operator=( Animal const & rhs );

		void	makeSound( void );

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif