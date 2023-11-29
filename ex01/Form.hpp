/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:57:33 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/29 21:02:58 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include<exception>
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
        Form(const Form& other);
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
        Form& operator=(const Form& other);
        const std :: string& getName() const;
        int getGradeToSign();
        int getGradeToExec();
        bool isSigned();
        void beSigned(Bureaucrat& B);
        ~Form(); 
};





#endif