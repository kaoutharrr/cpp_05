/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:36:12 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/29 21:02:58 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include<exception>
#include<cstdlib>
#include<ctime>

class Bureaucrat;


class AForm 
{
    private :
        const std ::  string _name;
        bool b;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        AForm();
        AForm(const std :: string& name, int  toSign, int toExec);
        AForm(AForm& other);
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
        AForm& operator=(AForm& other);
        const std :: string& getName() const ;
        int getGradeToSign()const ;
        int getGradeToExec()const;
        bool isSigned()const;
        void beSigned(Bureaucrat& B);
        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual ~AForm(); 
};

#endif