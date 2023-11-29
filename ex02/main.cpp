/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:16:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/29 21:01:40 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    AForm *A = 


}