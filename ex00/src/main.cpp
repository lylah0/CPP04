/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:36:38 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 12:18:41 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"
#include "../Cat.hpp"
#include "../Dog.hpp"

int	main(){
	const Animal*	a = new Animal();
	const Animal*	b = new Cat();
	const Animal*	c = new Dog();

	std::cout << "\n===test 1 : Animal" << std::endl;
	std::cout << "type -> " << a->getType() << " : ";
	a->makeSound();
	std::cout << "\n" << std::endl;

	std::cout << "===test 2 : Cat" << std::endl;
	std::cout << "type -> " << b->getType() << " : ";
	b->makeSound();
	std::cout << "\n" << std::endl;

	std::cout << "===test 3 : Dog" << std::endl;
	std::cout << "type -> " << c->getType() << " : ";
	c->makeSound();
	std::cout << "\n" << std::endl;

	delete(a);
	delete(b);
	delete(c);
	return (0);
}
