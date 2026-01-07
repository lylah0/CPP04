/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:10:25 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 17:02:55 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Brain;

class Dog : public Animal{
	private :
		Brain*	_brain;
	public :
		Dog();
		Dog(const Dog& src);
		Dog&	operator=(const Dog& rhs);
		virtual	~Dog();

		virtual void	makeSound() const;
		Brain*	getBrain() const;
};

#endif
