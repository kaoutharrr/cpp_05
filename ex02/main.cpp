/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:16:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/30 20:07:44 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    out << F->getName() <<" grade required to sign it : " << F->getGradeToSign() << ", grade required to execute it : " << F->getGradeToExec()  << " is signed : " << F->isSigned() << std :: endl;
    return out;
}



int main()
{
    AForm *A = new PresidentialPardonForm("pardon");
    AForm *B = new ShrubberyCreationForm("shruberry");
    AForm *C = new RobotomyRequestForm("roboto");
    try
    {
        Bureaucrat B1("B1", 38);
        //B1.signForm(*B);
        std :: cout << C;
        std :: cout << A;
        std :: cout << B;
        //B1.signForm(*B);
        B->beSigned(B1);
        std :: cout << B1;
    B->execute(B1);

    }
    catch(std :: exception &e)
    {
        delete A;
        delete B;
        delete C;
        std :: cerr << "Exception : " << e.what() << std :: endl;
        return 0;
    }
     delete A;
        delete B;
        delete C;
    //system("leaks ex02");
    return(0);
}

