/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:30:39 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/13 14:35:13 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Cat
{
    private:
        int     _numberOfLegs;
    
    public:
        Cat();
        Cat(Cat const &);
        Cat& operator=(Cat const &);
        ~Cat();

        void    run(int distance);

        void    scornSomeone(std::string const & target);
};

class Pony
{
    private:
        int     _numberOfLegs;

    public:
        Pony();
        Pony(Pony const &);
        Pony& operator=(Pony const &);
        ~Pony();

        void    run(int distance);

        void    doMagic(std::string const & target);
};
