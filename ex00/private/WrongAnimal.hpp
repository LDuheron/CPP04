/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:17 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 22:59:04 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	private:
		static std::string		_defaultType;	

	protected:
		std::string				_type;

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		WrongAnimal( std::string str );
		~WrongAnimal();

		WrongAnimal &			operator=( WrongAnimal const & rhs );

		std::string const		&getType(void) const;
		void					setType(std::string const &type);

		void					makeSound( void ) const;

};

#endif