/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:47:04 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/30 22:07:47 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"Intern.hpp"

Intern :: Intern()
{
}


Intern :: Intern(const Intern& other)
{
   *this = other;
}

Intern& Intern :: operator=(const Intern& other)
{
    (void)other;
    return(*this);
}

AForm* Intern :: ShrubberyMake(const std :: string target)
{
    return(new ShrubberyCreationForm(target));
}

AForm* Intern :: RobotomyMake(const std :: string target)
{
    return(new RobotomyRequestForm(target));
}

AForm* Intern :: PardonMake(const std :: string target)
{
    return(new PresidentialPardonForm(target));
}

AForm* Intern :: makeForm(const std :: string name, const std :: string target)
{
    std :: string Names[3] = { "shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (Intern :: *func[3])(const std :: string) = { &Intern :: ShrubberyMake, &Intern :: RobotomyMake, &Intern :: PardonMake};

    for (int i = 0; i < 3; i++)
    {
        if(Names[i] == name)
        {
            std :: cout << "Intern creates " << name << "\n";
            return((*(func[i]))(target));
        }  
    }
    std :: cout << "unknown Name !!! \n";

    return(NULL);
}

Intern :: ~Intern()
{
}