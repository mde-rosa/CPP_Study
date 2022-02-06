/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:57:26 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/06 20:02:07 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	int		numberOfBalls = 42;

	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls;
	//int&	ballsRef2; // FAUX

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std:: cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std:: cout << numberOfBalls << std::endl;

	return (0);
};