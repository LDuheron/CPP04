/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:47:27 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 14:08:03 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:

	protected: 
		std::string	ideas[100];

	public:

		Brain();
		Brain(Brain const & src);
		Brain(std::string str);
		~Brain();

		Brain	&	operator=(Brain const & rhs);
};

#endif