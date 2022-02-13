/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:35:53 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/13 14:39:31 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

// base class
class Animal
{
    private:
	    int _numberOfLegs;

    public:
	    Animal();
	    Animal(Animal const &);
	    Animal& operator=(Animal const &);
	    ~Animal();

	    void run(int distance);
	    void call();
	    void eat(std::string const & what);
	    void walk(int distance);
};

// It means that Cat is an animal
// public inheritance
class Cat : public Animal
{
    public:
	    Cat();
	    Cat(Cat const &);
	    Cat& operator=(Cat const &);
	    ~Cat();

	    void scornSomeone(std::string const & target);

};

class Pony : public Animal
{
    public:
    	Pony();
    	Pony(Pony const &);
    	Pony& operator=(Pony const &);
    	~Pony();
    
    	void doMagic(std::string const & target);
    	void run(int distance); // it will replace the animal function
};

class Otter : public Animal
{
    public:
	    Otter();
	    Otter(Otter const &);
	    Otter& operator=(Otter const &);
	    ~Otter();
};
