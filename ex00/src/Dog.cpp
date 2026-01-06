/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:31:58 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 12:19:49 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Dog.hpp"

Dog::Dog(){
	_type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src){
	_type = "Dog";
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs){
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &rhs){
		Animal::operator=(rhs);
	}
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Woof woof woof!" << std::endl;
}
