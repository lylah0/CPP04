/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:54:09 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 12:05:02 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"

Animal::Animal() : _type("Animal"){
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& src){
	std::cout << "Animal copy constructor called." << std::endl;
	_type = src._type;
}

Animal&	Animal::operator=(const Animal& rhs){
	std::cout << "Animal assignment operator called." << std::endl;
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType() const{
	return (_type);
}

void	Animal::makeSound() const{
	std::cout << "General animal sounds." << std::endl;
}
