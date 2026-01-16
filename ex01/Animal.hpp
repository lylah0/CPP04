/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:46:19 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/16 18:08:50 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	protected :
		std::string	_type;
	public:
		Animal();
		Animal(const Animal& src);
		Animal&	operator=(const Animal& rhs);
		virtual	~Animal();

		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif
