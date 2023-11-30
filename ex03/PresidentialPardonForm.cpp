/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:27:09 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/30 10:37:07 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"
#include"Bureaucrat.hpp"


const char* PresidentialPardonForm :: FormNotSigned :: what() const throw()
{
    return("form not signed");
}

PresidentialPardonForm :: PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
    _target = "Default";
}

PresidentialPardonForm :: PresidentialPardonForm(const std :: string& target) : AForm("PresidentialPardonForm", 25, 5)
{
    _target = target;
}

PresidentialPardonForm ::  PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
    _target = other._target;
}

PresidentialPardonForm& PresidentialPardonForm ::  operator=(const PresidentialPardonForm & other) 
{
    _target = other._target;
    return(*this);
}

void PresidentialPardonForm :: execute(Bureaucrat const & executor) const
{
    if(!this->isSigned())
        throw(FormNotSigned());
    if(this->getGradeToExec() < executor.getGrade())
        throw(GradeTooLowException());
    std :: cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm :: ~PresidentialPardonForm()
{
}
