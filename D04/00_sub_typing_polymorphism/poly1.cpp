/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:17:24 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/14 20:27:31 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character
{
    public:
        virtual void sayHello(std::string const & target);
};

// function overriding
class Warrior: public Character
{
    public:
        virtual void sayHello(std::string const & target);
};

class Cat
{
    //[...]
};

void    Character::sayHello(const std::string &target)
{
    std::cout << "Hello " << target << "!" << std::endl;
}

void    Warrior::sayHello(const std::string &target)
{
    std::cout << "F*** off " << target << ", I don't like you!" << std::endl;
}

int main(void)
{
    // This is OK. Warrior is a Warrior
    Warrior*    a = new Warrior();
    
    // This is OK. Warrior is a character
    Character*  b = new Warrior();
    
    // This is not OKAY. Character IS NOT a Warrior
    //(altough they ARE related, an W IS-A C, the reverse is untrue)
    // Warrior* c = new Character();
    
    // This is also not okay. Cat IS NOT a character
    //(They are not even related)
    // Character* d = new Cat();
    
    a->sayHello("students");
    b->sayHello("students");
    
    delete a;
    delete b;
    
    return 0;
}