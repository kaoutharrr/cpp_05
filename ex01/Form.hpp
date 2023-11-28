/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:57:33 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/27 18:47:43 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include<stdexcept>
#include"Bureaucrat.hpp"

class Form
{
    private :
        const std ::  string _name;
        bool b;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form();
        Form(const std :: string& name, int  toSign, int toExec);
        Form(Form& other);
        class GradeTooHighException : public std :: exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std :: exception
        {
            public:
                const char* what() const throw();
        };
        Form& operator=(Form& other);
        const std :: string& getName();
        int getGradeToSign();
        int getGradeToExec();
        bool isSigned();
        void beSigned(Bureaucrat& B);
        ~Form(); 
};





#endif