/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:02:58 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 12:04:52 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(const Cat& src);
		Cat&	operator=(const Cat& rhs);
		virtual	~Cat();

		virtual void	makeSound() const;
};

#endif
