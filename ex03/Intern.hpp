/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:27:14 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/28 22:01:01 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"


class Intern
{
    private:
        AForm* ShrubberyMake(const std :: string target);
        AForm* RobotomyMake(const std :: string target);
        AForm* PardonMake(const std :: string target);
    public :
        Intern();
       // Intern(const std :: string name, const std :: string _target);
        Intern(Intern& other);
        Intern& operator=(Intern& other);
        AForm* makeForm(const std :: string name, const std :: string target);
        ~Intern();
};

#endif