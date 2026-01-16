/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:14:04 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/16 15:27:56 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(){
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src){
	_type = "Cat";
	_brain = new Brain(*src._brain);
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& rhs){
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &rhs){
	Animal::operator=(rhs);
	delete _brain;
	_brain = new Brain(*rhs._brain);
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
