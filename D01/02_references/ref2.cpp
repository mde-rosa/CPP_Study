/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:02:59 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/06 20:11:02 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    byPtr(std::string* str)
{
    *str += " and ponies";
}

void    byConstPtr(std::string const * str)
{
    std::cout << *str << std::endl;
}

void    byRef(std::string& str)
{
    str += " and ponies";
}

void    byConstRef(std::string const & str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string str = "I like butterflies";

    std::cout << str << std::endl;
    byPtr(&str);
    byConstPtr(&str);

    str = "I like otters";

    std::cout << str << std::endl;
    byRef(str);

    byConstRef(str);

    return (0);
}