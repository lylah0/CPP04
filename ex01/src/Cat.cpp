/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:14:04 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 17:49:15 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Cat.hpp"
#include "../Brain.hpp"

Cat::Cat(){
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src){
	_type = "Cat";
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& rhs){
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &rhs){
	Animal::operator=(rhs);
	}
	return (*this);
}

Cat::~Cat(){
	delete(_brain);
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "Meow meow meow !" << std::endl;
}

Brain*	Cat::getBrain() const{
	return (_brain);
}
