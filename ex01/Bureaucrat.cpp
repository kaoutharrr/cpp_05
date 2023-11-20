/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:07:08 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/19 03:45:06 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"



const char*  Bureaucrat :: GradeTooHighException ::  what() const  _NOEXCEPT
{
    return("Grade too high");
}

const char*  Bureaucrat :: GradeTooLowException ::  what() const  _NOEXCEPT
{
    return("Grade too low");
}


Bureaucrat :: Bureaucrat() : _name("default")
{
    _grade = 0;
    std :: cout << "Default constructor of Bureaucrat has been called\n";
    if(_grade < 1)
        throw(GradeTooHighException());
    if(_grade > 150)
        throw(GradeTooLowException());
}

Bureaucrat :: Bureaucrat(const std :: string& name, int grade) : _name(name)
{
    _grade = grade;
    
    std :: cout << "Parametrized constructor of Bureaucrat has been called \n";
    if(_grade < 1)
        throw(GradeTooHighException());
    if(_grade > 150)
        throw(GradeTooLowException());
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
    try
    {
         F.beSigned(*this);
    }
    catch(Form :: GradeTooHighException &e)
    {
       std :: cout << _name << " couldn't sign " << F.getName() ;
       std :: cout << " because " << e.what() << std :: endl;
    }
      catch(Form :: GradeTooLowException &e)
    {
       std :: cout << _name << " couldn't sign " << F.getName() ;
       std :: cout << " because " << e.what() << std :: endl;
    }
    
    if(F.isSigned() == true)
    {
        std :: cout << _name << " signed " << F.getName() << std :: endl;
    }

}



Bureaucrat :: ~Bureaucrat()
{
    std :: cout << "Destructor of Bureaucrat has been called \n";
}

