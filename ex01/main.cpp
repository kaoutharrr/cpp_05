/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:35:00 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/19 03:57:59 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


std :: ostream & operator << ( std :: ostream &out, Form& F)
{
    out << F.getName() <<" grade required to sign it : " << F.getGradeToSign() << ", grade required to execute it : " << F.getGradeToExec()  << " is signed : " << F.isSigned() << std :: endl;
    return out;
}

int main()
{

    Bureaucrat B("lkkj", 119);
    Form F("fifi", 120, 2);
    std :: cout <<F;
    try
    {
        
        //F.beSigned(B);
        B.signForm(F);
       //// B.increment();
    }
    catch(Bureaucrat :: GradeTooHighException &e)
    {
        std :: cout << F;
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
    catch(Bureaucrat :: GradeTooLowException &e)
    {
        std :: cout <<F;
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
    catch(Form :: GradeTooHighException &e)
    {
        std :: cout << F;
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
    catch(Form :: GradeTooLowException &e)
    {
        std :: cout <<F;
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
   // catch(...)
    //return 0;
}
