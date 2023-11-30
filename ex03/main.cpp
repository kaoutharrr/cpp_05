/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:16:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/30 20:15:09 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

std :: ostream & operator << ( std :: ostream &out, const Bureaucrat& B)
{
    out << B.getName() << " , bureaucrat grade " << B.getGrade() << std :: endl;
    return out;
}
std :: ostream & operator << ( std :: ostream &out, AForm* F)
{
    out << F->getName() << " grade required to sign it : " << F->getGradeToSign() << ", grade required to execute it : " << F->getGradeToExec()  << " is signed : " << F->isSigned() << std :: endl;
    return out;
}


int main()
{ 
     AForm*   rrf;
    try
    {
        Bureaucrat b("a", 150);
        Intern  someRandomIntern;
  
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        if(!rrf)
          return 0;
         b.executeForm(*rrf);
     
        std :: cout << rrf;
    }
    catch(std::exception &e)
    {
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
   delete rrf;
    return(1);
}
