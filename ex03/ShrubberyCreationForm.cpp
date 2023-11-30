/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:36:04 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/30 20:08:05 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"Bureaucrat.hpp"
#include<fstream>


const char* ShrubberyCreationForm :: FormNotSigned :: what() const throw()
{
    return("form not signed");
}

ShrubberyCreationForm :: ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145,137)
{
    _target = "default";
}

ShrubberyCreationForm :: ShrubberyCreationForm(const std :: string& target) : AForm("ShrubberyCreationForm",145,137)
{
    _target = target;
}

ShrubberyCreationForm :: ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
    _target  = other._target;
}

ShrubberyCreationForm& ShrubberyCreationForm :: operator=(const ShrubberyCreationForm& other)
{
    if(this == &other)
        return(*this);
     _target  = other._target;
    return(*this);
}

void ShrubberyCreationForm :: execute(Bureaucrat const & executor) const
{
    if(!this->isSigned())
        throw(FormNotSigned());
    if(this->getGradeToExec() < executor.getGrade())
        throw(GradeTooLowException());
    std :: string fileName;
    fileName = _target + "_shrubbery";
    std ::ofstream fd(fileName.c_str());
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
}