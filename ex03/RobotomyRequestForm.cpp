/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:01:09 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/28 22:04:22 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"


const char*  RobotomyRequestForm :: FormNotSigned :: what() const throw()
{
    return("form not signed");
}

RobotomyRequestForm :: RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    _target = "default";
}


RobotomyRequestForm :: RobotomyRequestForm(const std :: string& target) : AForm("RobotomyRequestForm", 72, 45)
{
    _target = target;
}

RobotomyRequestForm :: RobotomyRequestForm(RobotomyRequestForm& other) : AForm(other)
{
    _target = other._target;
}

RobotomyRequestForm& RobotomyRequestForm :: operator=(RobotomyRequestForm& other)
{
   _target = other._target;
   return(*this);
}

void RobotomyRequestForm :: execute(Bureaucrat const &executor) const
{
    if(!this->isSigned())
        throw(FormNotSigned());
    if(this->getGradeToExec() < executor.getGrade())
        throw(GradeTooLowException());
    std :: cout << "Drilling noises ... \n";
   std :: srand(std :: time(0));
    int rand =  std :: rand();
    if((rand % 2) == 0)
    {
        std :: cout << _target << " has been robotomized successfully. \n";
    }
    else
        std :: cout << "the robotomy failed\n";
}

RobotomyRequestForm :: ~RobotomyRequestForm()
{
}