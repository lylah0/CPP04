/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:55:27 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/16 18:14:37 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(){
	const Animal*		b = new Cat();
	const Animal*		c = new Dog();

	std::cout << "===test 2 : Cat" << std::endl;
	std::cout << "type -> " << b->getType() << " : ";
	b->makeSound();
	std::cout << "\n" << std::endl;

	std::cout << "===test 3 : Dog" << std::endl;
	std::cout << "type -> " << c->getType() << " : ";
	c->makeSound();
	std::cout << "\n" << std::endl;

	delete(b);
	delete(c);
	return (0);
}
