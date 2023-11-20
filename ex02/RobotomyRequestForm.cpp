/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:01:09 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/20 08:20:10 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm() : AForm("Default", 72, 45)
{
    std :: cout << "Default constructor of RobotomyRequestForm has been called \n";
    _target = "default";
}


RobotomyRequestForm :: RobotomyRequestForm(const std :: string& target, const std :: string& name) : AForm(name, 72, 45)
{
    _target = target;
     std :: cout << "Parametrized constructor of RobotomyRequestForm has been called \n";
}

RobotomyRequestForm :: RobotomyRequestForm(RobotomyRequestForm& other) : AForm(other)
{
     std :: cout << "Copy constructor of RobotomyRequestForm has been called \n";
    _target = other._target;
}

RobotomyRequestForm& RobotomyRequestForm :: operator=(RobotomyRequestForm& other)
{
    std :: cout << "Coppy asignement operator of RobotomyRequestForm has been called \n";

}