/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:47:51 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 12:56:54 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called." << std::endl;
}

std::string	WrongAnimal::getType() const{
	return(_type);
}

void	WrongAnimal::makeSound() const{
	std::cout << "Wrong animal noises." << std::endl;
}
