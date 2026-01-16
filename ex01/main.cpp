/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:19:55 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/16 15:28:12 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {

	Animal*	animals[6];

	std::cout << "===test 1 : array of cats and dogs\n" << std::endl;
	for(int i = 0; i < 6; i++){
		if (i < 3){
			animals[i] = new Cat();
			animals[i]->makeSound();
		}
		else{
			animals[i] = new Dog();
			animals[i]->makeSound();
		}
	}

	for (int i = 0; i < 6; i++){
		delete animals[i];
	}

	std::cout << "\n===test 2 : shallow vs deep copy\n" << std::endl;
	Cat	og;
	og.getBrain()->setIdea(0, "Im OG cat.");

	Cat	copy(og);

	std::cout << "\nOG : " << og.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy : " << copy.getBrain()->getIdea(0) << std::endl;

	copy.getBrain()->setIdea(0, "Im copy of OG cat.");
	std::cout << "OG : " << og.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy : " << copy.getBrain()->getIdea(0) << std::endl;

	std::cout << "original brain ptr = " << og.getBrain() << std::endl;
	std::cout << "copy brain ptr     = " << copy.getBrain() << std::endl;

	std::cout << "\n===test 3 : deep copy using =operator" << std::endl;

	Cat	copy2;
	copy2 = og;

	std::cout << "\nOG : " << og.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy2 : " << copy2.getBrain()->getIdea(0) << std::endl;

	copy2.getBrain()->setIdea(0, "Im second copy of og cat.");
	std::cout << "OG : " << og.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy2 : " << copy2.getBrain()->getIdea(0) << std::endl;

	std::cout << "original brain ptr =    " << og.getBrain() << std::endl;
	std::cout << "second copy brain ptr = " << copy.getBrain() << std::endl;

	std::cout << "\n===test 4 : 100 ideas" << std::endl;
	Dog	dog;

	for(int i = 0; i < 100; i++){
		dog.getBrain()->setIdea(i, " I want food. Woof.");
	}
	for(int i = 0; i < 100; i++){
		std::cout << "idea number : " << i << dog.getBrain()->getIdea(i) << std::endl;
	}
	std::cout << "\n" << std::endl;
	return (0);
}
