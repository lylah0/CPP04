/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:02:58 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 17:03:02 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Brain;

class Cat : public Animal{
	private :
		Brain*	_brain;
	public:
		Cat();
		Cat(const Cat& src);
		Cat&	operator=(const Cat& rhs);
		virtual	~Cat();

		virtual void	makeSound() const;
		Brain*	getBrain() const;
};

#endif
