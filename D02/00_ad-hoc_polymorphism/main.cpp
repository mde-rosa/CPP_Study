/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:36:36 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/08 14:40:53 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int main() {
    
	Sample sample;
	
	sample.bar('a');
    sample.bar(42);
    float f = 3.14;
	sample.bar(f);
	sample.bar(sample);
	return 0;
}