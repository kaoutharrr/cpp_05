/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 03:54:25 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/27 18:49:26 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std :: string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std :: string& target);
        RobotomyRequestForm(RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(RobotomyRequestForm& other);
        class FormNotSigned : public std :: exception
        {
            public:
                const char* what() const throw();
        };
        void execute(Bureaucrat const & executor) const;
        ~RobotomyRequestForm();
};



#endif