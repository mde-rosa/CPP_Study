/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:35:30 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/06 19:54:16 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
    private:
        std::string _login;
    public:
        Student() : _login("ldefault")
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
    Student*     students = new Student[42];


    //Do come stuff here

    delete [] students;

}
