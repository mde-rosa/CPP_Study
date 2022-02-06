/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:13:35 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/06 21:02:54 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
    private:
        std::string _login;
        
    public:
        Student(std::string const & login) : _login(login)
        {
        }
        
        std::string&   getLoginRef()
        {
            return this->_login;
        }

        std::string const & getLoginRefConst() const
        {
            return this->_login;
        }
    
        std::string*    getLoginPtr()
        {
            return &(this->_login);
        }
        
        std::string const * getLoginPtrConst() const
        {
            return &(this->_login);
        }
};

int main()
{
    Student         bob = Student("bfubar");
    Student const   jim = Student("jfubar");

    std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
    //std::cout << *(bob.getLoginRefConst()) << " " << *(jim.getLoginRefConst()) << std::endl;

    bob.getLoginRef() = "bobfubar";
    std::cout << bob.getLoginRefConst() << std::endl;

    *(bob.getLoginPtr()) = "bobbyfubar";
    std::cout << bob.getLoginRefConst() << std::endl;
}