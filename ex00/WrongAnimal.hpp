/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:26:22 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 12:56:57 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal{
	protected :
		std::string	_type;
	public :
		WrongAnimal();
		virtual ~WrongAnimal();

		std::string	getType() const;
		void		makeSound() const;
};

#endif
