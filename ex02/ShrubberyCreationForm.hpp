/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:12:58 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/20 03:27:01 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std :: string _target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std :: string& target,const std :: string& name);
        ShrubberyCreationForm(ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
        class FormNotSigned : public std :: exception
        {
            public:
                const char* what() const _NOEXCEPT;
        };
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
};

#endif