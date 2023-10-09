/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:22 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 21:24:53 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{	
	private:
		static 					std::string	_defaultType;

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		WrongCat( std::string str );
		~WrongCat();

		WrongCat &				operator=( WrongCat const & rhs );
	
		std::string const		&getType(void) const;
		void					setType(std::string const &type);

		void					makeSound( void ) const;

};

#endif