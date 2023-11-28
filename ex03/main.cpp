/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:16:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/28 22:02:44 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"


std :: ostream & operator << ( std :: ostream &out, AForm& F)
{
    out << F.getName() <<" grade required to sign it : " << F.getGradeToSign() << ", grade required to execute it : " << F.getGradeToExec()  << " is signed : " << F.isSigned() << std :: endl;
    return out;
}



int main()
{
    try
    {
    Bureaucrat b("a", 12);
    Intern  someRandomIntern;
        AForm*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if(!rrf)
        return 0;
    rrf->beSigned(b);
    b.executeForm(*rrf);
    std :: cout << *rrf;
    }
    catch(std::exception &e)
    {
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
}

