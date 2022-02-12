/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:46:51 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/08 14:56:31 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

#include <iostream>

class Integer {

public:

	Integer(int const n);
	~Integer( void );

	int         getValue( void ) const;

	Integer &   operator=(Integer const & rhs); //rhs = right hand side
	Integer     operator+(Integer const & rhs) const;

private:

	int _n;

};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);

#endif // ***** INTEGER_CLASS_H