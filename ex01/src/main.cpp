/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:13:01 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 15:44:11 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	Animal* array[100];

	for (int i = 0; i < 100; i += 2)
		array[i] = new Cat();
	for (int i = 1; i < 100; i += 2)
		array[i] = new Dog();
	delete dog;//should not create a leak
	delete cat;
	for (int i = 0; i < 100; i++)
		delete array[i];
	return (0);
}
