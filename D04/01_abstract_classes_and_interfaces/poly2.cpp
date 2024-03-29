/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:31:09 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/14 20:40:35 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// abstract class with a pure method that does not exist
// when a class inherits this class, it needs to implement the function
// it requires all the children classes to have the attack behaviour,
// even if the mother class does not have it
class ACharacter
{
	// abstract class can have attributes
	// but only Warrior are able to instantiate it
    private:
    	std::string name;
    public:
    	virtual void    attack(std::string const & target) = 0;
    	void            sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
    public:
	    virtual void    attack(std::string const & target);
};

void ACharacter::sayHello(const std::string &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::attack(const std::string &target)
{
	std::cout << "*attacks " << target << " with a sword" << std::endl;
}

// abstract only. It is an interface. interface can't have attributes
// it will force all objects inheriting from this class to have certain behaviours
// it's very useful when you develop with other people
// other people can do whatever they want with these functions, but they know how you will use them

//class ICoffeeMaker
//{
//    public:
//    	virtual void fillWatertank(IWaterSource * src) = 0;
//    	virtual Icoffee* makeCoffee(std::string const & type) = 0;
//};

int main()
{
	ACharacter* a = new Warrior();

	// This would NOT be ok because ACharacter is abstract
	// ACharacter* b = new ACharacter();

	a->sayHello("students");
	a->attack("roger");

	return 0;
}