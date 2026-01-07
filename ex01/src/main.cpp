/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:19:55 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 18:13:30 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"
#include "../Cat.hpp"
#include "../Dog.hpp"
#include "../Brain.hpp"

int main() {

	int	num = 6;
	Animal*	animals[num];

	std::cout << "===test 1 : array of cats and dogs\n" << std::endl;
	for(int i = 0; i < num; i++){
		if (i < 3){
			animals[i] = new Cat();
			animals[i]->makeSound();
		}
		else{
			animals[i] = new Dog();
			animals[i]->makeSound();
		}
	}

	for (int i = 0; i < num; i++){
		delete animals[i];
	}

	std::cout << "\n===test 2 : shallow vs deep copy\n" << std::endl;
	Cat*	a = new Cat;
	Animal*	b = new Animal;
	Animal*	c = a;

	a->getBrain();

	return (0);
}
