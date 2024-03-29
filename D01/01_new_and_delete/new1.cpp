/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:35:30 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/06 19:48:43 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
    std::string _login;
public:
    Student(std::string login) : _login(login)
    {
        std::cout << "Student " << this->_login << " is born" << std::endl;
    }
    ~Student()
    {
        std::cout << "Student " << this->_login << " died" << std::endl;
    }
};

int main()
{
    Student     bob = Student("bfubar");
    Student*    jim = new Student("jfubar");

    //Do come stuff here

    delete jim; //jim is destroyed

    return (0); // bob is destroyed
}