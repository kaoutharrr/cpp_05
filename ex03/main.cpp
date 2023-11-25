/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:16:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/25 18:34:04 by kkouaz           ###   ########.fr       */
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
    Bureaucrat b("a", 12);
    Intern  someRandomIntern;
        AForm*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf->beSigned(b);
    b.executeForm(*rrf);
    std :: cout << *rrf;
}

// int main()
// {
//     // AForm *SH = new ShrubberyCreationForm("target of shruberry");
//    // AForm *robotomy = new RobotomyRequestForm("robotomy");
//      AForm *president = new PresidentialPardonForm("request");
//     try
//     {
//         Bureaucrat B("KOKO", 1);
//         // SH->beSigned(B);
//         president->beSigned(B);
//         president->execute(B);
//         // president->beSigned(B);
//     } 
//     catch(...)
//     {
//         std ::  cout << "lalalalal\n";
//     }
// }

// int main()
// {
//     AForm* F = new ShrubberyCreationForm("koko");
//     ShrubberyCreationForm l("strwaberryy");
//     Bureaucrat b("som1",136);
//     ShrubberyCreationForm lala ;
//     lala = l;
    
    
//     try
//     {  
//         lala.beSigned(b);
//         Bureaucrat a("valentine", 130);
//         F->beSigned(b);
//         F->execute(b);
//         a.executeForm(lala);
//     }
//     catch(Bureaucrat :: GradeTooHighException &e)
//     {
//         std :: cout << F;
//         std :: cerr << "Exception : " << e.what() << std :: endl;
//     }
//     catch(Bureaucrat :: GradeTooLowException &e)
//     {
//         std :: cout <<F;
//         std :: cerr << "Exception : " << e.what() << std :: endl;
//     }
//     catch(AForm :: GradeTooHighException &e)
//     {
//         std :: cout << F;
//         std :: cerr << "Exception : " << e.what() << std :: endl;
//     }
//     catch(AForm :: GradeTooLowException &e)
//     {
//         std :: cout <<F;
//         std :: cerr << "Exception : " << e.what() << std :: endl;
//     }
//     catch(ShrubberyCreationForm :: FormNotSigned &e)
//     {
//         std :: cout <<F;
//         std :: cerr << "Exception : " << e.what() << std :: endl;
//     }
//     catch(...)
//     {
        
//     }
//}