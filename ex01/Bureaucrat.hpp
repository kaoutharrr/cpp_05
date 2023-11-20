/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:47:20 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/19 03:36:04 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include<iostream>
#include <stdexcept>
#include<cstring>

class Form;

class Bureaucrat
{
    private :
        const std :: string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std :: string& name, int grade);
        Bureaucrat(Bureaucrat &other);
        class GradeTooHighException : public std :: exception
        {
            public :
                 const char* what() const  _NOEXCEPT;
        };
        class GradeTooLowException : public std :: exception
        {
            public :
                 const char* what() const  _NOEXCEPT;
        };
        Bureaucrat& operator=(Bureaucrat& other);
        const std :: string& getName() const;
        void increment();
        void decrement();
        int getGrade() const;
        void signForm(Form& F);
        ~Bureaucrat();
};


// class myEx : public std :: exception
// {
//     private:
//         std :: string _msg;
//     public:
//         myEx(std :: string message);
//         const char* what();
//        ;
//     }
// }



#endif