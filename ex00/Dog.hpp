/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:10:25 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 12:04:53 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
	public :
		Dog();
		Dog(const Dog& src);
		Dog&	operator=(const Dog& rhs);
		virtual	~Dog();

		virtual void	makeSound() const;
};

#endif
