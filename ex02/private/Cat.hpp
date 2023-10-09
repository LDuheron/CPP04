/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:12:22 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 15:52:53 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{	
	private:
		static 					std::string	_defaultType;
		Brain					*_brain;

	public:

		Cat();
		Cat( Cat const & src );
		Cat( std::string str );
		virtual ~Cat();

		Cat &					operator=( Cat const & rhs );
	
		std::string const		&getType(void) const;
		void					setType(std::string const &type);

		virtual void			makeSound( void ) const;

};

#endif