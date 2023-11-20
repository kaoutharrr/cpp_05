/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:02:29 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/20 03:44:43 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"AForm.hpp"
#include"Bureaucrat.hpp"

const char* AForm :: GradeTooHighException :: what() const _NOEXCEPT
{
    return("Grade too high");
}

const char* AForm :: GradeTooLowException :: what() const _NOEXCEPT
{
    return("Grade too low");
}

AForm:: AForm(): _name("default") , _gradeToSign(0), _gradeToExecute(0)
{
    b = 0;
    if(_gradeToExecute < 1 || _gradeToSign < 1)
        throw(GradeTooHighException());
    if(_gradeToExecute > 150 || _gradeToSign > 150)
        throw(GradeTooLowException());
    std :: cout << "Default constructor for AForm has been called\n";
}

AForm :: AForm(const std :: string& name, int  toSign, int toExec) : _name(name), _gradeToSign(toSign), _gradeToExecute(toExec)
{
    b = 0;
    if(_gradeToExecute < 1 || _gradeToSign < 1)
        throw(GradeTooHighException());
    if(_gradeToExecute > 150 || _gradeToSign > 150)
        throw(GradeTooLowException());
    std :: cout << "Parametrized constructor for AForm has been called\n";
}

AForm :: AForm(AForm& other)  : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std :: cout << "Copy constructor for AForm has been called\n";
    *this = other;
}

AForm& AForm :: operator=(AForm& other)
{
    std :: cout << "Copy assignment operator for AForm has been called\n";
    b = other.b;
    return(*this);
}

const std :: string& AForm :: getName() const
{
    return(_name);
}

int AForm :: getGradeToSign() const
{
    return(_gradeToSign);
}

int AForm :: getGradeToExec() const
{
    return(_gradeToExecute);
}

bool AForm :: isSigned() const
{
    return(b);
}

void AForm :: beSigned(Bureaucrat& B)
{
    if(B.getGrade() <= _gradeToSign)
        b = 1;
    else
        throw(GradeTooLowException());
}

AForm :: ~AForm()
{
    std :: cout << "Destructor for AForm has been called\n";
}