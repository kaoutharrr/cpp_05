/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:55:21 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/19 03:28:12 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

const char* Form :: GradeTooHighException :: what() const _NOEXCEPT
{
    return("Grade too high");
}

const char* Form :: GradeTooLowException :: what() const _NOEXCEPT
{
    return("Grade too low");
}

Form:: Form(): _name("default") , _gradeToSign(0), _gradeToExecute(0)
{
    b = 0;
    if(_gradeToExecute < 1 || _gradeToSign < 1)
        throw(GradeTooHighException());
    if(_gradeToExecute > 150 || _gradeToSign > 150)
        throw(GradeTooLowException());
    std :: cout << "Default constructor for Form has been called\n";
}

Form :: Form(const std :: string& name, int  toSign, int toExec) : _name(name), _gradeToSign(toSign), _gradeToExecute(toExec)
{
    b = 0;
    if(_gradeToExecute < 1 || _gradeToSign < 1)
        throw(GradeTooHighException());
    if(_gradeToExecute > 150 || _gradeToSign > 150)
        throw(GradeTooLowException());
    std :: cout << "Parametrized constructor for Form has been called\n";
}

Form :: Form(Form& other)  : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std :: cout << "Copy constructor for Form has been called\n";
    *this = other;
}

Form& Form :: operator=(Form& other)
{
    std :: cout << "Copy assignment operator for Form has been called\n";
    b = other.b;
    return(*this);
}

const std :: string& Form :: getName()
{
    return(_name);
}

int Form :: getGradeToSign()
{
    return(_gradeToSign);
}

int Form :: getGradeToExec()
{
    return(_gradeToExecute);
}

bool Form :: isSigned()
{
    return(b);
}

void Form :: beSigned(Bureaucrat& B)
{
    if(B.getGrade() <= _gradeToSign)
        b = 1;
    else
        throw(GradeTooLowException());
}

Form :: ~Form()
{
    std :: cout << "Destructor for Form has been called\n";
}