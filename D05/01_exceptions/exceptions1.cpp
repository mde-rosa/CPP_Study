/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <mde-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:04:15 by mde-rosa          #+#    #+#             */
/*   Updated: 2022/02/15 02:05:59 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

void test1()
{
	try
    {
        // Do some stuff here
        if (/*there is an error*/)
        {
            throw std::exception();
        }
        else
        {
        	// Do some more stuff
        }
    }
	catch (std::exception e)
	{
	    // handle the error here
    }
}

void test2()
{
    // Do some stuff here
    if (/*there is an error*/)
    {
        throw std::exception();
    }
    else
    {
    	// Do some other stuff
    }
}

void test3()
{
    try
    {
    	test2();
    }
    catch (std::exception& e) // catch exception by reference
    {
    	// handle error
    }
}

void test4()
{
    class PEBKACException: public std::exception
    {
    	public:
    	    virtual const char* what() const throw() // understand better
            {
                return ("Problem exists between keyboard and chair");
            }
    };
    try
    {
    	test3();
    }
    catch (PEBKACException& e) // specific catch
    {
    	// handle the fact that the user is an idiot
    }
    catch (std::exception& e) // generic catch
    {
    	// handle other exceptions that are like std::exception
    }
}