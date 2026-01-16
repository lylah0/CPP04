/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:52:02 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/16 17:21:02 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	_type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound() const{
	std::cout << "Woof ?" << std::endl;
}
