/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:44:56 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/06 12:56:53 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public :
		WrongCat();
		~WrongCat();

		void	makeSound() const;
};

#endif
