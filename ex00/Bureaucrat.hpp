/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:47:20 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/17 00:06:59 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include<iostream>

class Bureaucrat
{
    private :
        const  std :: string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std :: string& name, int& grade);
        Bureaucrat(Bureaucrat &other);
        Bureaucrat& operator=(Bureaucrat& other);
        std :: string& getName();
        int getGrade();
        ~Bureaucrat();
};






#endif