/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:27:09 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/24 15:35:06 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"
#include"Bureaucrat.hpp"


const char* PresidentialPardonForm :: FormNotSigned :: what() const _NOEXCEPT
{
    return("form not signed");
}

PresidentialPardonForm :: PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
    std :: cout << "Default constructor of PresidentialPardonForm has been called \n";
    _target = "Default";
}

PresidentialPardonForm :: PresidentialPardonForm(const std :: string& target) : AForm("PresidentialPardonForm", 25, 5)
{
    std :: cout << "Parametrized constructor of PresidentialPardonForm has been called \n";
    _target = target;
}

PresidentialPardonForm ::  PresidentialPardonForm(PresidentialPardonForm& other) : AForm(other)
{
    std :: cout << "Copy constructor of PresidentialPardonForm has been called \n";
    _target = other._target;
}

PresidentialPardonForm& PresidentialPardonForm ::  operator=(PresidentialPardonForm & other) 
{
    std :: cout << "Copy assignement operator of PresidentialPardonForm has been called \n";
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
    std :: cout << "Destructor of PresidentialPardonForm has been called\n ";
}
