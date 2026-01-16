/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:31:58 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/16 17:54:40 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(){
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src){
	_type = "Dog";
	_brain = new Brain(*src._brain);
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs){
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &rhs){
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Dog::~Dog(){
	delete(_brain);
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Woof woof woof!" << std::endl;
}

Brain*	Dog::getBrain() const{
	return (_brain);
}
