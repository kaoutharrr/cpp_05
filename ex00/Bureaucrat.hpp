/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:47:20 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/25 22:45:09 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include<iostream>
#include <stdexcept>
#include<cstring>

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
        ~Bureaucrat();
};




#endif