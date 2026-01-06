/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:36:38 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 13:07:18 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"
#include "../Cat.hpp"
#include "../Dog.hpp"
#include "../WrongAnimal.hpp"
#include "../WrongCat.hpp"

int	main(){
	const Animal*		a = new Animal();
	const Animal*		b = new Cat();
	const Animal*		c = new Dog();
	const WrongAnimal*	d = new WrongCat();
	const WrongCat*		e = new WrongCat();

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

	std::cout << "===test 4 : Wrong animals" << std::endl;
	std::cout << "type > " << d->getType() << " : ";
	d->makeSound();
	std::cout << "type > " << e->getType() << " : ";
	e->makeSound();
	std::cout << "\n" << std::endl;

	delete(a);
	delete(b);
	delete(c);
	delete(d);
	delete(e);
	return (0);
}
