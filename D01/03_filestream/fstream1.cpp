/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:07:22 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/06 21:10:38 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream   ifs("numbers");
    unsigned int    dst;
    unsigned int    dst2;
    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;
    ifs.close();

    //------------------------

    std::ofstream   ofs("test.out");

    ofs << "I loke ponies a whole damn a lot" << std::endl;
    ofs.close();
}