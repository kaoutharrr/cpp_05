/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:07:08 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/18 00:48:05 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat :: Bureaucrat() : _name("default")
{
    _grade = 0;
    std :: cout << "Default constructor of Bureaucrat has been called\n";
}

Bureaucrat :: Bureaucrat(std :: string& name, int& grade) : _name(name)
{
    _grade = grade;
    
    std :: cout << "Parametrized constructor of Bureaucrat has been called \n";
}

Bureaucrat :: Bureaucrat(Bureaucrat& other)
{
    std :: cout << "Copy constructor of Bureaucrat has been called \n";
        *this = other;
}

Bureaucrat& Bureaucrat :: operator=(Bureaucrat& other) 
{
    std :: cout << "Copy assignement operator of Bureaucrat has been called \n";
    if(this == &other)
        return(*this);
    _grade = other._grade;
    return(*this);
}


const std :: string& Bureaucrat :: getName() const
{
    return(_name);
}

int Bureaucrat :: getGrade() const
{
    return(_grade);
}

void Bureaucrat :: increment()
{
    _grade--;
}

void Bureaucrat :: decrement()
{
    _grade++;
}
Bureaucrat :: ~Bureaucrat()
{
    std :: cout << "Destructor of Bureaucrat has been called \n";
}

