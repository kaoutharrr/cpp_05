/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:02:29 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/30 10:11:33 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"AForm.hpp"
#include"Bureaucrat.hpp"

const char* AForm :: GradeTooHighException :: what() const throw()
{
    return("Grade too high");
}

const char* AForm :: GradeTooLowException :: what() const throw()
{
    return("Grade too low");
}

AForm:: AForm(): _name("default") , _gradeToSign(150), _gradeToExecute(150)
{
    b = 0;
}

AForm :: AForm(const std :: string& name, int  toSign, int toExec) : _name(name), _gradeToSign(toSign), _gradeToExecute(toExec)
{
    b = 0;
    if(_gradeToExecute < 1 || _gradeToSign < 1)
        throw(GradeTooHighException());
    if(_gradeToExecute > 150 || _gradeToSign > 150)
        throw(GradeTooLowException());
}

AForm :: AForm(const AForm& other)  : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    *this = other;
}

AForm& AForm :: operator=(const AForm& other)
{
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
}