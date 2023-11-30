/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:07:08 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/30 18:51:22 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"



const char*  Bureaucrat :: GradeTooHighException ::  what() const throw()
{
    return("Grade too high");
}

const char*  Bureaucrat :: GradeTooLowException ::  what() const  throw()
{
    return("Grade too low");
}


Bureaucrat :: Bureaucrat() : _name("default")
{
    _grade = 150;
}

Bureaucrat :: Bureaucrat(const std :: string& name, int grade) : _name(name)
{
    _grade = grade;
    if(_grade < 1)
        throw(GradeTooHighException());
    if(_grade > 150)
        throw(GradeTooLowException());
}

Bureaucrat :: Bureaucrat(const Bureaucrat& other) : _name(other._name)
{
    *this = other;
}

Bureaucrat& Bureaucrat :: operator=(const Bureaucrat& other) 
{
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
    if(_grade < 1)
        throw(GradeTooHighException());
    if(_grade > 150)
        throw(GradeTooLowException());
}

void Bureaucrat :: decrement()
{
    _grade++;
    if(_grade < 1)
        throw(GradeTooHighException());
    if(_grade > 150)
        throw(GradeTooLowException());
}

void Bureaucrat :: signForm(Form& F)
{
    if(F.isSigned() == false)
    {
        try
        {
            F.beSigned(*this);
        }
        catch(std :: exception &e)
        {
        std :: cout << _name << " couldn't sign " << F.getName() ;
        std :: cout << " because " << e.what() << std :: endl;
        }
        if(F.isSigned() == true)
        {
            std :: cout << _name << " signed " << F.getName() << std :: endl;
        }
    }
}

Bureaucrat :: ~Bureaucrat()
{
}
