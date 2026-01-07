/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:16:40 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/07 17:57:58 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& src){
	std::cout << "Brain copy constructor called." << std::endl;
	for(int i = 0; i < 100; i++){
		_ideas[i] = src._ideas[i];
	}
}

Brain&	Brain::operator=(const Brain& rhs){
	std::cout << "Brain assignment operator called." << std::endl;
	if (this != &rhs){
		for(int i = 0; i < 100; i++){
			this->_ideas[i] = rhs._ideas[i]; //this->_ideas[i] == _ideas[i]
		}
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called." << std::endl;
}

void	Brain::setIdea(int index, std::string idea){
	if (index >= 0 && index < 100){
		_ideas[index] = idea;
	}
	else
		return;
}

std::string	Brain::getIdea(int index) const{
	if (index >= 0 && index < 100){
		return (_ideas[index]);
	}
	return ("");
}
