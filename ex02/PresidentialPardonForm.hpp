/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:19:39 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/27 18:49:26 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include"AForm.hpp"


class PresidentialPardonForm :  public AForm
{
    private:
        std :: string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std :: string& target);
        PresidentialPardonForm(PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(PresidentialPardonForm& other);
        class FormNotSigned : public std :: exception
        {
            public:
                const char* what() const throw();
        };
        void execute(Bureaucrat const & executer) const;
        ~PresidentialPardonForm();

};


#endif