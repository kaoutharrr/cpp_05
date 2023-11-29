/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:35:00 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/29 20:46:22 by kkouaz           ###   ########.fr       */
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

    try
    {
        Bureaucrat B("B1", 120);
        Form F("F1", 120, 120);
        Form A ("A", 121, 121);
        A.beSigned(B);
        B.signForm(F);
        std :: cout << A;
        std :: cout << F;

    }
    catch(std::exception &e)
    {
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
    system("leaks Form");
}
