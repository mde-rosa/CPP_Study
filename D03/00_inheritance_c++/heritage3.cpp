/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage3.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:40:45 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/13 14:45:05 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Quadruped // Can access name, run() and legs
{ 
    private:
    	std::string     name; // Only accessible from an Quadruped object

    protected:
    	Leg             legs[4]; // Accessible from an Quadruped or derived object

    public:
    	void            run(); // Accessible from wherever
};

class Dog : public Quadruped // Can access run() and legs
{

};

int main() // Can only access run()
{
}