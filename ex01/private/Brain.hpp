/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:47:27 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 00:20:53 by lduheron         ###   ########.fr       */
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
		std::string	ideas;

	public:

		Brain();
		Brain(Brain const & src);
		Brain(std::string str);
		~Brain();

		Brain	&	operator=(Brain const & rhs);
};

#endif