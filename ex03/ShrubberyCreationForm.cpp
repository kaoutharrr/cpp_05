/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:36:04 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/24 15:35:37 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"Bureaucrat.hpp"
#include<fstream>


const char* ShrubberyCreationForm :: FormNotSigned :: what() const _NOEXCEPT
{
    return("form not signed");
}

ShrubberyCreationForm :: ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145,137)
{
    std :: cout << "Default constructor of ShrubberyCreationForm has been called \n";
    _target = "default";
}

ShrubberyCreationForm :: ShrubberyCreationForm(const std :: string& target) : AForm("ShrubberyCreationForm",145,137)
{
    std :: cout << "Parametrized constructor of ShrubberyCreationForm has been called \n";
    _target = target;
}

ShrubberyCreationForm :: ShrubberyCreationForm(ShrubberyCreationForm& other) : AForm(other)
{
    std :: cout << "Copy constructor of ShrubberyCreationForm has been called \n";
    _target  = other._target;
}

ShrubberyCreationForm& ShrubberyCreationForm :: operator=(ShrubberyCreationForm& other)
{
    std :: cout << "Copy assignement operator of ShrubberyCreationForm has been called \n";
    if(this == &other)
        return(*this);
     _target  = other._target;
    //*this = other;
    return(*this);
}

void ShrubberyCreationForm :: execute(Bureaucrat const & executor) const
{
    if(!this->isSigned())
        throw(FormNotSigned());
    // if(this->getGradeToExec() > executor.getGrade())
    //     throw(GradeTooHighException());
    if(this->getGradeToExec() < executor.getGrade())
        throw(GradeTooLowException());
    std :: string fileName;
    fileName = _target + "_shrubbery";
    std ::ofstream fd(fileName);
    if(!fd.is_open())
        return;
    
    fd << "               ,@@@@@@@,\n";
    fd << " ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
    fd << ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
    fd << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
    fd << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
    fd << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
    fd << "`&%\\ ` /%&'    |.|        \\ '|8'\n";
    fd <<"   |o|        | |         | |\n";
    fd << "   |.|        | |         | |\n";
    fd <<"  \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ \n";
    
}

ShrubberyCreationForm :: ~ShrubberyCreationForm()
{
    std :: cout << "Destructor of ShrubberyCreationForm has been called \n";
}