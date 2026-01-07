/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:46:19 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/07 17:49:43 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <string>
# include <iostream>

class Brain{
	protected :
		std::string	_ideas[100];
	public :
		Brain();
		Brain(const Brain& src);
		Brain&	operator=(const Brain& rhs);
		~Brain();

		void		setIdea(int index, std::string idea);
		std::string	getIdea(int index) const;
};

#endif
