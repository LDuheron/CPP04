/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:22 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 18:57:27 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{	
	private:
		static std::string	_defaultType;
		std::string			_type;

	public:

		Cat();
		Cat( Cat const & src );
		Cat( std::string str );
		~Cat();

		Cat &		operator=( Cat const & rhs );

		void	makeSound( void );

};

#endif