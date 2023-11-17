/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:07:08 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/17 00:17:40 by kkouaz           ###   ########.fr       */
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
    _name = other._name;
    _grade = other._grade;
    return(*this)
}
 